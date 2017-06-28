--LuaMarquee v6.2 by Smurfier (smurfier20@gmail.com)
--This work is licensed under a Creative Commons Attribution-Noncommercial-Share Alike 3.0 License.

function Initialize()
	Vars = SELF:GetOption('Variable')
	Pos = SELF:GetOption('Position', 'right'):lower()
	Measures, Timer = {}, 0
	for w in SELF:GetOption('MeasureName'):gmatch('[^%|]+') do
		table.insert(Measures, SKIN:GetMeasure(w))
	end
end -- Initialize

function Update()
	local Values, Text = {}
	for i, v in ipairs(Measures) do
		table.insert(Values, v:GetStringValue())
	end
	if #Values == 0 then
		return 'Input Error!'
	else
		Text = table.concat(Values, SELF:GetOption('Delimiter', '  ')):gsub('\n', ' ')
	end
	--Marquee
	if (not OldText) or Text ~= (OldText or '') then
		Timer, Length, OldText = 0, Text:len(), Text
	end
	local Width = SELF:GetNumberOption('Width', 10)
	if Length <= Width and SELF:GetNumberOption('ForceScroll', 0) == 0 then
		return Text
	else
		Timer = Timer % (Length + 5) + 1
		return (Text .. " +++ " .. Text):sub(Timer, Timer + Width + 4)
	end
end -- Update