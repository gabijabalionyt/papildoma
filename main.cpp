#include "funkcijos.h"

int main()
{

	Klase_ klase{};

	klase.IntervaloNustatymas(1, 3);                                                          //Turime 3 failus is kuriu galime nuskaityti
	klase.CinSkaicius("Kuri faila norite nuskaityti?");

	int numeris;
	numeris = klase.get_input();                                                  // pasirenkame faila nuskaitymui

	klase.IntervaloNustatymas(1, 100);                                                        //Leidziame vartotojui pasirinkti ar spausdinti visus zodzius ar tik su tam tikru pasikartojimu skaiciumi
	klase.CinSkaicius("Kiek maziausiai kartu turi zodius pasikartoti tekste?");
	klase.Tikrinimas("Ar norite, jog butu isrinkti visi URL link'ai?");                      //Bei leidziame pasirinkti ar jis nori, kad buti isrinkti URL linkai


	try {
		MAPw Zodziai = Skaitymas(klase, numeris);
		MAPw::iterator it = Zodziai.begin();

		if (it->first.size() == 0) throw std::runtime_error("Teksto failas yra tuscias");
		bool empty = true;

		std::ofstream out("Rezultatai.txt");
		for(const auto& x : Zodziai)
		{
			if (x.first.size() >= klase.get_input()) {
				empty = false;
				out << "Zodis |" << x.first + " \t" << "| buvo pakartotas " << x.second.size() << " kartus(-u) eilutese:";
				std::cout <<"Zodis |"<< x.first+" \t" << "| buvo pakartotas " << x.second.size() << " kartus(-u) eilutese: ";
				for (const auto& a : x.second) {
					out << a << " ";
                    cout << a << " ";

				}
				out << endl;
				cout << endl;
			}
		}
		if (empty) {
			cout << std::string(55, '=') << endl;
			cout << "Nera zodziu atitinkanciu reikalavimus" << endl;
		}

		if(klase.TikrinimasTiesa()) {                                //jei reikalingi ulr

			cout << std::string(55, '=') << endl;
			cout << "\t\tURLS:" << endl;
			cout << std::string(55, '=') << endl;

            out << std::string(55, '=') << endl;
			out << "\t\tURLS:" << endl;
			out << std::string(55, '=') << endl;

			vector<string> URLS = RastiURLS(numeris);
			if (URLS.empty()) {
				cout << "Tekste ulr adresu nera" << endl;
			}
			else {
				for (const auto& url : URLS)
				{
					cout << url << endl;
					out << url << endl;
				}
			}
			cout << std::string(55, '=') << endl;
            out << std::string(55, '=') << endl;

		}

	}
	catch (const std::runtime_error& e) {
		cout << e.what() << endl;
	}

}
