function Update()
	WinampMeasure = SKIN:GetMeasure("MeasureState")
	PlayString = WinampMeasure:GetStringValue()
	
	returnValue = "Pause"
	
	if ((PlayString == "2") or (PlayString == "0")) then
		returnValue = "Play"
	end
	
	return returnValue
end