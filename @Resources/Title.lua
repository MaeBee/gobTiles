function Update()
	WinampMeasure = SKIN:GetMeasure("MeasureState")
	ArtistMeasure = SKIN:GetMeasure("MeasureArtist")
	TrackMeasure = SKIN:GetMeasure("MeasureTrack")
	PlayString = WinampMeasure:GetStringValue()
	Artist = ArtistMeasure:GetStringValue()
	Track = TrackMeasure:GetStringValue()
	
	returnValue = "Paused"
	
	if (PlayString == "1") then
		returnValue = Artist .. " - " .. Track
	end
	
	return returnValue
end