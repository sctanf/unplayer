-- Modified, original by Socks the Fox

function Initialize()
	Acm = 1000
	Source = SKIN:GetMeasure(SELF:GetOption('Source', ''))
	oV = nil
end

function Update()
	nV = Source:GetStringValue()
	local cV = nV
	if oV == nil
	then
		oV = nV
	end
	if nV ~= oV
	then
		if Acm < 1000
		then
			Acm = (Acm + 50)
			cV = DoFade(oV, nV, Acm / 1000)
		else
			Acm = 0
			cV = DoFade(oV, nV, Acm / 1000)
		end
		if cV == nV
		then
			oV = nV
		end
	end
	return string.format('%i, %i, %i', tonumber(string.sub(cV, 1, 2), 16), tonumber(string.sub(cV, 3, 4), 16), tonumber(string.sub(cV, 5, 6), 16))
end

function DoFade(sC, dC, dT)
	if dT < 0
	then
		dT = 0
	else
		if dT > 1
		then
			dT = 1
		end
	end
	sR = tonumber(string.sub(sC, 1, 2), 16)
	dR = tonumber(string.sub(dC, 1, 2), 16)
	cR = ((1 - dT) * sR) + (dT * dR)
	sG = tonumber(string.sub(sC, 3, 4), 16)
	dG = tonumber(string.sub(dC, 3, 4), 16)
	cG = ((1 - dT) * sG) + (dT * dG)
	sB = tonumber(string.sub(sC, 5, 6), 16)
	dB = tonumber(string.sub(dC, 5, 6), 16)
	cB = ((1 - dT) * sB) + (dT * dB)
	return string.format('%02X%02X%02X', cR, cG, cB)
end
