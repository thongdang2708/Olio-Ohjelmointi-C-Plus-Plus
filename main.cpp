#include <iostream>


void exerciseOne();
void exerciseTwo();
void exerciseThree();
int suurin(int eka, int toka, int kolmas);
int pienin(int eka, int toka, int kolmas);
void exerciseFour();
void exerciseFive();
void exerciseSix();
void exerciseSeven();
void muuta_lukua(int* luku);
void exerciseEight();
void muuta_lukua (int& luku);
void exerciseNine();
void theory();
void exerciseTen();
void exerciseEleven();
void exerciseTwelve();
void exerciseThirdteen();
void exerciseFourteen();
void exerciseFifthteen();
void exerciseSixteen();
void exerciseEighteen();
void exerciseNineteen();
void exerciseTwenty();
void exerciseTwentyOne();

int main() {
//    exerciseOne();
//    exerciseTwo();
//    exerciseThree();
//    exerciseFour();
//    exerciseFive();
//    exerciseSix();
//    exerciseSeven();
//    exerciseEight();
//    exerciseNine();
//    theory();
//    exerciseTen();
//    exerciseEleven();
//    exerciseTwelve();
//    exerciseThirdteen();
//    exerciseFourteen();
//    exerciseFifthteen();
//    exerciseSixteen();
//    exerciseEighteen();
//    exerciseNineteen();
//    exerciseTwenty();
    exerciseTwentyOne();
    return 0;
}

//Exercise 1.1: for-lause

void exerciseOne () {

    int numero;

    std::cout << "Anna kokonaisluku:";
    std::cin >> numero;

    for (int i=1; i<=numero; i++) {
        std::cout << i << std::endl;
    }
}

// Exercise 1.2: Funktiot suurin ja pienin

void exerciseTwo () {
    int luku1, luku2, luku3, suurinLuku, pieninLuku;
    std::cout << "Syötä ensimmäinen kokonaisluku:";
    std::cin >> luku1;
    std::cout << "Syötä toinen kokonaisluku:";
    std::cin >> luku2;
    std::cout << "Syötä kolmas kokonaisluku:";
    std::cin >> luku3;
    suurinLuku = suurin(luku1, luku2, luku3);
    pieninLuku = pienin(luku1, luku2, luku3);
    std::cout << "Syöttämistäsi luvuista suurin oli " << suurinLuku;
    std::cout << " ja pienin " << pieninLuku << "." << std::endl;
}

int suurin(int eka, int toka, int kolmas) {

    int* array = new int[3];

    *(array + 0) = eka;
    *(array + 1) = toka;
    *(array + 2) = kolmas;

    std::sort(array, array + 3);

    return *(array + 2);

 }

int pienin(int eka, int toka, int kolmas) {

    int* array = new int[3];

    *(array + 0) = eka;
    *(array + 1) = toka;
    *(array + 2) = kolmas;

    std::sort(array, array + 3);

    return *(array + 0);
}

// Exercise 1.3: Hypotenuusan laskeminen

void exerciseThree () {

    double first_leg;
    double second_leg;

    std::cout << "Anna ensimmäinen kateetti:";
    std::cin >> first_leg;

    std::cout << "Anna toinen kateetti:";
    std::cin >> second_leg;

    double result = std::sqrt(std::pow(first_leg, 2) + std::pow(second_leg, 2));

    std::cout << "Hypotenuusan pituus: " << result << std::endl;
}

// Exercise 2.2: Piste-luokalle palvelut

//class Piste {
//private:
//    int x_;
//    int y_;
//
//public:
//    void KerroPaikka();
//    void AsetaX (int x);
//    void AsetaY (int y);
//    void Siirra (int x, int y);
//};
//
//void Piste::KerroPaikka() {
//    std::cout << "Pisteen x-koordinaatti: " << x_ << std::endl;
//    std::cout << "Pisteen y-koordinaatti: " << y_ << std::endl;
//}
//
//void Piste::AsetaX(int x) {
//    this->x_ = x;
//}
//
//void Piste::AsetaY(int y) {
//    this->y_ = y;
//}
//
//void Piste::Siirra(int x, int y) {
//    this->x_ = this->x_ + x;
//    this->y_ = this->y_ + y;
//}

//void exerciseFour () {
//
//    Piste pikseli;
//    pikseli.AsetaX(34);
//    pikseli.AsetaY(100);
//
//    std::cout << "Pisteolio muodostettu ja koordinaatit asetettu.\n";
//
//    pikseli.KerroPaikka();
//
//    pikseli.Siirra(20, -33);
//
//    std::cout << "Pistettä siirretty. \n";
//    pikseli.KerroPaikka();
//}

//Exercise 2.3: Piste-luokan käyttäminen

//void exerciseFive () {
//
//    Piste pikseli;
//    int x;
//    int y;
//    std::cout << "Syötä x-koordinaatti:";
//    std::cin >> x;
//
//    std::cout << "Syötä y-koordinaatti:";
//    std::cin >> y;
//    pikseli.AsetaX(39);
//    pikseli.AsetaY(23);
//
//    std::cout << "Pisteolio muodostettu ja koordinaatit asetettu." << std::endl;
//
//    pikseli.KerroPaikka();
//}

// Exercise 3.1: Asiakastili

class Asiakastili {
private:
    int tilinumero;
    std::string nimi;
    int saldo;

public:
    void LisaaAsiakas (int tilinumero, int saldo, std::string nimi) {
        this->tilinumero = tilinumero;
        this->saldo = saldo;
        this->nimi = nimi;
    }

    int VertaaTiliNro (int tilinumero) {
        if (this->tilinumero == tilinumero) {
            return 1;
        }

        return 0;
    }

    void NaytaTiedot () {
        std::cout << "Tilinumero: " << this->tilinumero << std::endl;
        std::cout << "Asiakkaan nimi: " << this->nimi << std::endl;
        std::cout << "Tilin saldo: " << this->saldo << std::endl;
    }

    void MuutaSaldoa (int uusi_saldo) {
        this->saldo = uusi_saldo;
    }
};

void exerciseSix() {

    int valinta, tilin_nro, uusi_saldo, i, loytyi = 0;

    Asiakastili asiakasrekisteri[5];

    asiakasrekisteri[0].LisaaAsiakas(12345, 312, "Mikko Möttönen");
    asiakasrekisteri[1].LisaaAsiakas(23456, 23, "Anni Manninen");
    asiakasrekisteri[2].LisaaAsiakas(34567, 112, "Simo Siili");
    asiakasrekisteri[3].LisaaAsiakas(45678, 99834, "Riku Rikas");
    asiakasrekisteri[4].LisaaAsiakas(56789, 7500, "Marja Mallikas");

    do {

        std::cout << std::endl<< "1: Näytä asiakkaan tiedot." << std::endl;
        std::cout << "1: Muuta asiakkaan saldoa." << std::endl;
        std::cout << "Lopetus negatiivisella luvulla." << std::endl;
        std::cout << "Valitse toiminto: " << std::endl;
        std::cin >> valinta;

        if (valinta == 1) {
            std::cout << "Anna tilinumero: " << std::endl;
            std::cin >> tilin_nro;

            for (i=0; i < 5; i++) {
                if (asiakasrekisteri[i].VertaaTiliNro(tilin_nro) == 1) {
                    loytyi = 1;
                    asiakasrekisteri[i].NaytaTiedot();
                }
            }

            if (loytyi == 0) {
                std::cout << "Antamaasi tilinumeroa ei löytynyt." << std::endl;
            }
            loytyi = 0;
        } else if (valinta == 2) {
            std::cout << "Anna tilinumero: ";
            std::cin >> tilin_nro;
            std::cout << "Anna uusi saldo: ";
            std::cin >> uusi_saldo;

            for (int i=0; i<5; i++) {
                if (asiakasrekisteri[i].VertaaTiliNro(tilin_nro) == 1) {
                    loytyi = 1;
                    asiakasrekisteri[i].MuutaSaldoa(uusi_saldo);
                    std::cout << std::endl << "Saldo muutettu.";
                }
            }

            if (loytyi == 0) {
                std::cout << std::endl << "Antamaasi tilinumeroa ei löytynyt." << std::endl;
            }

            loytyi = 0;
        } else {
            std::cout << std::endl << "Ohjelma lopetetaan.";
        }

    } while (valinta > 0);
}

//Exercise 4.1: Osoittimen käyttö aliohjelmaparametrina

void muuta_lukua (int* luku) {

    std::cout << "Anna korvaava luku: ";
    std::cin >> *luku;
}


void exerciseSeven() {
    int luku = 2;
    std::cout << "Luku ohjelman alussa: " << luku << std::endl;
    muuta_lukua(&luku);
    std::cout << "Luku ohjelman lopussa: " << luku << std::endl;
}

//Exercise 4.2: Viittauksen käyttö aliohjelmaparametrissa

void muuta_lukua (int& luku) {

    std::cout << "Anna korvaava luku: ";
    std::cin >> luku;

}

void exerciseEight () {

    int luku = 2;
    std::cout << "Luku ohjelman alussa: " << luku << std::endl;
    muuta_lukua(luku);
    std::cout << "Luku ohjelman lopussa: " << luku << std::endl;
}

//Exercise 4.3: Dynaamista muistinhallintaa

class Piste
{
public:
    Piste();
    Piste(int x, int y);
    void TulostaPiste();
    void AsetaPiste(int x, int y);
private:
    int x_;
    int y_;
};

Piste::Piste() {

    this->x_ = 1;
    this->y_ = 1;
}

Piste::Piste (int x, int y) {
    this->x_ = x;
    this->y_ = y;
}

void Piste::TulostaPiste()
{
    std::cout << "Pisteen x-koordinaatti: " << x_ << std::endl;
    std::cout << "Pisteen y-koordinaatti: " << y_ << std::endl;
}

void Piste::AsetaPiste(int x, int y)
{
    x_ = x;
    y_ = y;
}

Piste* uusi_piste();

Piste* uusi_piste() {
    int x;
    int y;
    std::cout << "Anna uuden pisteen x: ";
    std::cin >> x;
    std::cout << "Anna uuden pisteen y: ";
    std::cin >> y;

    Piste* piste = new Piste();
    piste->AsetaPiste(x, y);

    return piste;
}

void exerciseNine () {
    Piste* pisteolio;
    pisteolio = uusi_piste();
    pisteolio->TulostaPiste();
    delete pisteolio;
}

void funktio(int* o_x);

void theory () {

    int x = 100;
    int* o_x = &x;
    funktio(o_x);
    std::cout << x;

}

void funktio(int *o_x)
{
    *o_x *= *o_x;
}

// Exercise 5.1: Oletusmuodostimen rakentaminen

void exerciseTen () {

    Piste pisteolio;
    pisteolio.TulostaPiste();
}

// Exercise 5.2: Parametrillisen muodostimen rakentaminen

void exerciseEleven () {
    int x, y;
    std::cout << "Anna muodostettavan olion x-koordinaatti: ";
    std::cin >> x;
    std::cout << "Anna muodostettavan olio y-koordinaatti: ";
    std::cin >> y;
    Piste pisteolio(x, y);
    pisteolio.TulostaPiste();
}

// Exercise 6.1: Joukkue koostuu pelaajista

class Pelaaja {
private:
    std::string nimi;
    std::string rooli;
    int nro;

public:
    void AsetaNimi (std::string nimi);
    void AsetaRooli (std::string rooli);
    void AsetaNro (int nro);
    std::string KerroNimi();
    std::string KerroRooli();
    int KerroNro();
};

void Pelaaja::AsetaNimi(std::string nimi) {
    this->nimi = nimi;
}

void Pelaaja::AsetaRooli(std::string rooli) {
    this->rooli = rooli;
}

void Pelaaja::AsetaNro(int nro) {
    this->nro = nro;
}

std::string Pelaaja::KerroNimi() {
    return this->nimi;
}

std::string Pelaaja::KerroRooli() {
    return this->rooli;
}

int Pelaaja::KerroNro() {
    return this->nro;
}

class Joukkue {
private:
    Pelaaja* pelaajat[30];
    int pelaajia_;

public:
    void LisaaPelaaja(std::string nimi, std::string rooli, int nro);
    void TulostaJoukkue();
    Joukkue();
    ~Joukkue();
};

Joukkue::Joukkue(): pelaajia_(0) {
    int i;

    for (int i=0; i<30; i++) {
        pelaajat[i] = NULL;
    }
}

Joukkue::~Joukkue () {
    int i;

    for (int i=0; i<30; i++) {
        delete pelaajat[i];
    }
}

void Joukkue::LisaaPelaaja(std::string nimi, std::string rooli, int nro) {
    pelaajat[pelaajia_] = new Pelaaja();
    pelaajat[pelaajia_]->AsetaNimi(nimi);
    pelaajat[pelaajia_]->AsetaRooli(rooli);
    pelaajat[pelaajia_]->AsetaNro(nro);
    pelaajia_++;
}

void Joukkue::TulostaJoukkue() {
    int i;
    for (int i=0; i<30; i++) {
        if (pelaajat[i] != NULL) {
            std::cout << "Nimi: " << pelaajat[i]->KerroNimi() << std::endl;
            std::cout << "Rooli: " << pelaajat[i]->KerroRooli() << std::endl;
            std::cout << "Pelinumero: " << pelaajat[i]->KerroNro() << std::endl;
        }
    }
}

void exerciseTwelve () {
    Joukkue Viopa;
    Viopa.LisaaPelaaja("Matti Meikäläinen", "Maalivahti", 1);
    Viopa.LisaaPelaaja("Kale Kokkola", "Vaihtopenkin lämmittäjä", 82);
    Viopa.LisaaPelaaja("Simo Supermies", "Hyökkääjä", 99);
}

// Exercise 7.1: Korttipakka koostuu korteista

class Kortti
{
public:
    int KerroMaa();
    int KerroArvo();
    void AlustaKortti(int maa, int arvo);
    Kortti();
private:
    int maa_;   // 1=hertta, 2=ruutu, 3=pata, 4=risti
    int arvo_;
};

Kortti::Kortti() : maa_(0), arvo_(0)
{
}

int Kortti::KerroMaa()
{
    return maa_;
}

int Kortti::KerroArvo()
{
    return arvo_;
}

void Kortti::AlustaKortti(int maa, int arvo)
{
    maa_ = maa;
    arvo_ = arvo;
}

class KorttiPakka {
private:
    std::vector<int> hertta;
    std::vector<int> ruutu;
    std::vector<int> pata;
    std::vector<int> risti;

public:
    KorttiPakka() {

        for (int i=0; i<=12; i++) {
            this->hertta.push_back(i);
        };

        for (int i=this->hertta[this->hertta.size()-1] + 1; i<=this->hertta[this->hertta.size()-1]+13; i++) {
            this->ruutu.push_back(i);
        }

        for (int i=this->ruutu[this->ruutu.size()-1] + 1; i<=this->ruutu[this->ruutu.size()-1]+13; i++) {
            this->pata.push_back(i);
        }

        for (int i=this->pata[this->pata.size()-1] + 1; i<=this->pata[this->pata.size()-1]+13; i++) {
            this->risti.push_back(i);
        }

    }

    bool checkHertta (int numero) {

        for (int i=0; i<this->hertta.size(); i++) {
            if (this->hertta[i] == numero) {
                return true;
            }
        }

        return false;
    }

    bool checkRuutu (int numero) {

        for (int i=0; i<this->ruutu.size(); i++) {
            if (this->ruutu[i] == numero) {
                return true;
            }
        }

        return false;
    }

    bool checkPata (int numero) {

        for (int i=0; i<this->pata.size(); i++) {
            if (this->pata[i] == numero) {
                return true;
            }
        }

        return false;
    }

    bool checkRisti (int numero) {

        for (int i=0; i<this->risti.size(); i++) {
            if (this->risti[i] == numero) {
                return true;
            }
        }

        return false;
    }

    int findIndexinHertta (int numero) {

        for (int i=0; i<this->hertta.size(); i++) {
            if (this->hertta[i] == numero) {
                return i+1;
            }
        }

        return -1;
    }

    int findIndexinRuutu (int numero) {

        for (int i=0; i<this->ruutu.size(); i++) {
            if (this->ruutu[i] == numero) {
                return i+1;
            }
        }

        return -1;
    }

    int findIndexinPata (int numero) {

        for (int i=0; i<this->pata.size(); i++) {
            if (this->pata[i] == numero) {
                return i+1;
            }
        }

        return -1;
    }

    int findIndexinRisti (int numero) {

        for (int i=0; i<this->risti.size(); i++) {
            if (this->risti[i] == numero) {
                return i+1;
            }
        }

        return -1;
    }

    void TulostaKortti (int numero) {

        if (this->checkHertta(numero)) {

            std::cout << "Hertta " << this->findIndexinHertta(numero) << std::endl;
            return;
        } else if (this->checkRuutu(numero)) {
            std::cout << "Ruutu " << this->findIndexinRuutu(numero) << std::endl;
            return;
        } else if (this->checkPata(numero)) {
            std::cout << "Pata " << this->findIndexinPata(numero) << std::endl;
            return;
        }

        std::cout << "Risti " << this->findIndexinRisti(numero) << std::endl;
    }

};

void exerciseThirdteen () {

    int jnro;

    KorttiPakka korttiPakka;

    korttiPakka.TulostaKortti(0);
    korttiPakka.TulostaKortti(20);
    korttiPakka.TulostaKortti(27);
    korttiPakka.TulostaKortti(40);
    korttiPakka.TulostaKortti(51);
}

//Exercise 7.2: Auto-Henkilo assosiaatio

//class Auto
//{
//public:
//    void Liiku(int km);
//    void KerroAjetutKm();
//    Auto(std::string merkki, int ajetut_km);
//private:
//    std::string merkki_;
//    int ajetut_km_;
//};
//
//Auto::Auto(std::string merkki, int ajetut_km) : merkki_(merkki), ajetut_km_(ajetut_km)
//{
//}
//
//void Auto::Liiku(int km)
//{
//    ajetut_km_ = ajetut_km_ + km;
//    std::cout << "Wrooom..." << km << " kilometriä ajettu." << std::endl;
//}
//
//void Auto::KerroAjetutKm()
//{
//    std::cout << merkki_ << " merkkisellä autolla on ajettu " << ajetut_km_ << " km" << std::endl;
//}
//
//class Henkilo {
//private:
//    std::string name;
//    Auto* anAuto;
//
//public:
//    Henkilo(std::string name, Auto* anAuto) {
//        this->name = name;
//        this->anAuto = anAuto;
//    }
//
//    void AjaAutoa(int number) {
//        this->anAuto->Liiku(number);
//    }
//
//    void VaihdaAutoa (Auto* anAuto) {
//        this->anAuto = anAuto;
//    }
//
//};
//
//void exerciseFourteen () {
//    Auto* deksteri = new Auto("Toyota Corolla DX", 25000);
//    Auto* ferrari = new Auto("Ferrari F50", 1500);
//
//    Henkilo* autoilija = new Henkilo("James", deksteri);
//    deksteri->KerroAjetutKm();
//    autoilija->AjaAutoa(1000);
//    deksteri->KerroAjetutKm();
//
//    ferrari->KerroAjetutKm();
//    autoilija->VaihdaAutoa(ferrari);
//    autoilija->AjaAutoa(20000);
//    ferrari->KerroAjetutKm();
//}

// Exercise 9.1: Luokan rakentaminen periyttämällä

class Ajoneuvo
{
public:
    Ajoneuvo(int ajetut, int paino, std::string merkki, std::string malli);

protected:
    void Liikuta(int km);
    int PalautaAjetut();
    int PalautaPaino();
    std::string PalautaMerkki();
    std::string PalautaMalli();

private:
    int ajetut_;
    int paino_;
    std::string merkki_;
    std::string malli_;
};

Ajoneuvo::Ajoneuvo(int ajetut, int paino, std::string merkki, std::string malli) : ajetut_(ajetut), paino_(paino),
                                                                         merkki_(merkki), malli_(malli)
{
}

void Ajoneuvo::Liikuta(int km)
{ ajetut_ = ajetut_ + km; }

int Ajoneuvo::PalautaAjetut()
{ return ajetut_; }

int Ajoneuvo::PalautaPaino()
{ return paino_; }

std::string Ajoneuvo::PalautaMerkki()
{ return merkki_; }

std::string Ajoneuvo::PalautaMalli()
{ return malli_; }


class Auto : public Ajoneuvo
{
public:
    Auto(int ajetut, int paino, std::string merkki, std::string malli, std::string rekisteri_numero, int maara);
    void TulostaAutonTiedot();
    void AjaAutoa(int ajetut);

private:
    int maara;
    std::string rekisteri_numero;
};

Auto::Auto(int ajetut, int paino, std::string merkki, std::string malli, std::string rekisteri_numero, int maara) : Ajoneuvo(ajetut, paino, merkki, malli)
{
    this->rekisteri_numero = rekisteri_numero;
    this->maara = maara;
}

void Auto::TulostaAutonTiedot() {
    std::cout << "Merkki: " << this->PalautaMerkki() << std::endl;
    std::cout << "Malli: " << this->PalautaMalli() << std::endl;
    std::cout << "Paino: " << this->PalautaPaino() << std::endl;
    std::cout << "Ajetut kilometrit: " << this->PalautaAjetut() << std::endl;
    std::cout << "Rekisterinumero: " << this->rekisteri_numero << std::endl;
    std::cout << "Maksimi matkustajien määrä: " << this->maara << std::endl;
    std::cout << "" << std::endl;
}

void Auto::AjaAutoa(int ajetut) {
    this->Liikuta(ajetut);
    std::cout << "Autolla ajettu " << ajetut << " kilometriä." << std::endl;
    std::cout << "" << std::endl;
}

void exerciseFifthteen () {

    Auto pirssi(250000, 1700, "Toyota", "Carina II", "TFM-257", 5);
    pirssi.TulostaAutonTiedot();
    pirssi.AjaAutoa(25000);
    pirssi.TulostaAutonTiedot();
}

//// Exercise 9.2: Abstraktin luokan määrittely

//class Kuvio {
//private:
//    char tekstuuri;
//
//public:
//    Kuvio(char tekstuuri) {
//        this->tekstuuri = tekstuuri;
//    };
//
//    char PalautaTekstuuri () {
//        return this->tekstuuri;
//    }
//
//    virtual void Piirra () {
//        std::cout << "Piirra" << std::endl;
//    }
//};
//
//class Nelio : public Kuvio {
//private:
//    int sivun_pituus_;
//
//public:
//    Nelio(char tekstuuri, int sivun_pituus);
//    void Piirra();
//};
//
//Nelio::Nelio(char tekstuuri, int sivun_pituus) : Kuvio(tekstuuri), sivun_pituus_(sivun_pituus) {
//
//}
//
//void Nelio::Piirra() {
//    int i, j;
//
//    for (int i=0; i<sivun_pituus_; i++) {
//        for (int j=0; j<sivun_pituus_; j++) {
//            if (j == sivun_pituus_ - 1) {
//                std::cout << PalautaTekstuuri() << std::endl;
//            } else {
//                std::cout << PalautaTekstuuri();
//            }
//        }
//    }
//}
//
//void exerciseSixteen () {
//    int sivun_pituus;
//    char tekstuuri;
//    std::cout << "Anna muodostettavan neliön sivun pituus: ";
//    std::cin >> sivun_pituus;
//    std::cout << "Syötä merkki, jota käytetään neliön tekstuurina: ";
//    std::cin >> tekstuuri;
//
//    Kuvio* nelio = new Nelio(tekstuuri, sivun_pituus);
//    nelio->Piirra();
//    delete nelio;
//}

//Exercise 9.3: Kuviosta periytyvä nelikulmio

//class Kuvio
//{
//public:
//    Kuvio(char tekstuuri);
//    char PalautaTekstuuri();
//    virtual void Piirra() = 0;
//
//private:
//    char tekstuuri_;
//};
//
//Kuvio::Kuvio(char tekstuuri) : tekstuuri_(tekstuuri)
//{
//}
//
//char Kuvio::PalautaTekstuuri()
//{
//    return tekstuuri_;
//}
//
//
//class Nelio : public Kuvio
//{
//public:
//    Nelio(char tekstuuri, int sivun_pituus);
//    void Piirra();
//private:
//    int sivun_pituus_;
//};
//
//Nelio::Nelio(char tekstuuri, int sivun_pituus) : Kuvio(tekstuuri), sivun_pituus_(sivun_pituus)
//{
//}
//
//
//void Nelio::Piirra()
//{
//    int i, j;
//    for(i=0; i<sivun_pituus_; i++)
//    {
//        for(j=0; j<sivun_pituus_; j++)
//        {
//            if(j==sivun_pituus_ - 1){
//                std::cout << PalautaTekstuuri() << std::endl;
//            }
//            else{
//                std::cout << PalautaTekstuuri();
//            }
//        }
//    }
//}
//
//class Nelikulmio : public Nelio {
//private:
//    int sivun_leveys;
//    int sivun_korkeus;
//
//public:
//    Nelikulmio(char tekstuuri, int sivun_korkeus, int sivun_leveys);
//    void Piirra();
//};
//
//Nelikulmio::Nelikulmio(char tekstuuri, int sivun_korkeus, int sivun_leveys) : Nelio(tekstuuri, sivun_leveys) {
//    this->sivun_leveys = sivun_leveys;
//    this->sivun_korkeus = sivun_korkeus;
//};
//
//void Nelikulmio::Piirra() {
//
//    for (int i=0; i<this->sivun_korkeus; i++) {
//        for (int j=0; j<this->sivun_leveys; j++) {
//            std::cout << this->PalautaTekstuuri();
//        }
//        std::cout << "" << std::endl;
//    }
//}
//
//void exerciseEighteen () {
//    int sivun_leveys, sivun_korkeus, i, valinta;
//    char tekstuuri;
//
//
//    Kuvio* kuviot[3];
//
//    for (int i=0; i<3; i++) {
//        std::cout << "Muodostetaanko neliö (syötä 1) vai nelikulmio (syötä muu luku): ";
//        std::cin >> valinta;
//
//        if (valinta == 1) {
//            std::cout << "Anna muodostettavan neliön sivun pituus: ";
//            std::cin >> sivun_leveys;
//            std::cout << "Syötä merkki, jota käytetään neliön tekstuurina: ";
//            std::cin >> tekstuuri;
//            kuviot[i] = new Nelio(tekstuuri, sivun_leveys);
//        } else {
//            std::cout << "Anna muodostettavan nelikulmion sivun korkeus: ";
//            std::cin >> sivun_korkeus;
//            std::cout << "Anna muodostettavan nelikulmion sivun leveys: ";
//            std::cin >> sivun_korkeus;
//            std::cout << "Syötä merkki, jota käytetään neliön tekstuurina: ";
//            std::cin >> tekstuuri;
//            kuviot[i] = new Nelikulmio(tekstuuri, sivun_korkeus, sivun_leveys);
//        }
//    }
//
//    std::cout << std::endl << "Muodostetut kuviot piirrettynä:" << std::endl << std::endl;
//
//    for (int i=0; i<3; i++) {
//        kuviot[i]->Piirra();
//        std::cout << std::endl;
//    }
//
//}
//

//Exercise 9.4: Erilaisten kuvioiden piirtäminen

class Kuvio
{
public:
    Kuvio(char tekstuuri);
    char PalautaTekstuuri();
    virtual void Piirra() = 0;

private:
    char tekstuuri_;
};

Kuvio::Kuvio(char tekstuuri) : tekstuuri_(tekstuuri)
{
}

char Kuvio::PalautaTekstuuri()
{
    return tekstuuri_;
}

class Nelio : public Kuvio
{
public:
    Nelio(char tekstuuri, int sivun_pituus);
    void Piirra();
private:
    int sivun_pituus_;
};

Nelio::Nelio(char tekstuuri, int sivun_pituus) : Kuvio(tekstuuri),
                                                 sivun_pituus_(sivun_pituus)
{
}


void Nelio::Piirra()
{
    int i, j;
    for(i=0; i<sivun_pituus_; i++)
    {
        for(j=0; j<sivun_pituus_; j++)
        {
            if(j==sivun_pituus_ - 1){
                std::cout << PalautaTekstuuri() << std::endl;
            }
            else{
                std::cout << PalautaTekstuuri();
            }
        }
    }
}

class Nelikulmio : public Kuvio
{
public:
    Nelikulmio(char tekstuuri, int korkeus_, int leveys_);
    void Piirra();
private:
    int korkeus_;
    int leveys_;
};

Nelikulmio::Nelikulmio(char tekstuuri, int korkeus, int leveys) :
        Kuvio(tekstuuri), korkeus_(korkeus), leveys_(leveys)
{
}

void Nelikulmio::Piirra()
{
    int i, j;
    for(i=0; i<korkeus_; i++)
    {
        for(j=0; j<leveys_; j++)
        {
            if(j==leveys_ - 1){
                std::cout << PalautaTekstuuri() << std::endl;
            }
            else{
                std::cout << PalautaTekstuuri();
            }
        }
    }
}

void TulostaKuviot(Kuvio* kuviotaulukko[3]) {

    for (int i=0; i<3; i++) {
        kuviotaulukko[i]->Piirra();
        std::cout << "" << std::endl;
    }
};


void exerciseNineteen() {

    int sivun_leveys, sivun_korkeus, i, valinta;
    char tekstuuri;
    Kuvio* kuviot[3];

    for(i=0; i<3; i++)
    {
        std::cout << "Muodostetaanko neliö (syötä 1) vai nelikulmio (syötä muu luku): ";
        std::cin >> valinta;

        if(valinta==1)
        {
            std::cout << "Anna muodostettavan neliön sivun pituus: ";
            std::cin >> sivun_leveys;
            std::cout << "Syötä merkki, jota käytetään neliön tekstuurina: ";
            std::cin >> tekstuuri;
            kuviot[i] = new Nelio(tekstuuri, sivun_leveys);
        }
        else
        {
            std::cout << "Anna muodostettavan nelikulmion sivun korkeus: ";
            std::cin >> sivun_korkeus;
            std::cout << "Anna muodostettavan nelikulmion sivun leveys: ";
            std::cin >> sivun_leveys;
            std::cout << "Syötä merkki, jota käytetään nelikulmion tekstuurina: ";
            std::cin >> tekstuuri;
            kuviot[i] = new Nelikulmio(tekstuuri, sivun_korkeus, sivun_leveys);
        }

    }

    std::cout << std::endl << "Muodostetut kuviot piirrettynä:" << std::endl << std::endl;
    TulostaKuviot(kuviot);

}

//Exercise 10.1: Kopiointi- ja sijoitusmuodostimen toteuttaminen

class Luku {
private:
    int numero;

public:
    void Muuta(int numero);
    Luku(Luku* uusi);
    Luku();
    void Tulosta();
};

void Luku::Muuta(int numero) {
    this->numero = numero;
};

Luku::Luku(Luku* uusi) {
    this->numero = uusi->numero;
};

void Luku::Tulosta () {
    std::cout << "Luku on: " << this->numero << std::endl;
}

Luku::Luku() {

}

void exerciseTwenty () {
    Luku eka;
    eka.Muuta(100);
    Luku toka(eka);
    eka.Tulosta();
    toka.Tulosta();


    eka.Muuta(200);
    toka.Tulosta();

    toka = eka;
    toka.Tulosta();

    eka.Muuta(300);

    eka.Tulosta();
    toka.Tulosta();
}

// Exercise 11.1: Viimeinen ponnistus: ihmisiä ja koiria


class Koira {
private:
    std::string nimi;
    int km_kavely;

public:
    Koira(std::string nimi);
    int Liikku(int km);
    std::string Ota_Nimi();
    void Hauku();
};

Koira::Koira(std::string nimi) {
    this->nimi = nimi;
}

int Koira::Liikku(int km) {
    this->km_kavely = this->km_kavely + km;

    return this->km_kavely;
}

std::string Koira::Ota_Nimi () {
    return this->nimi;
}

void Koira::Hauku() {
    std::cout << this->nimi << ": Hau hau! Olen kävellyt " << this->km_kavely << " kilometriä." << std::endl;
}

class Ihminen {
private:
    std::string nimi;
    Koira* koira;

public:
    Ihminen(std::string nimi);
    void KavelytaKoiraa(int km);
    void OtaVastuuKoirasta(Koira* koira);
};

Ihminen::Ihminen(std::string nimi) {
    this->nimi = nimi;
}

void Ihminen::KavelytaKoiraa(int km) {

    if (this->koira == NULL) {
        std::cout << this->nimi << ": Mutta eihän minulla ole koiraa..." << std::endl;
        return;
    }

    std::cout << this->nimi << ": " << this->koira->Ota_Nimi() << " käveli juuri " << this->koira->Liikku(km) << " kilometriä." << std::endl;
}

void Ihminen::OtaVastuuKoirasta(Koira* koira) {
    this->koira = koira;
};


void exerciseTwentyOne() {
    std::string koiran_nimi, ihmisen_nimi;
    std::cout << "Anna ihmisen nimi: ";
    std::cin >> ihmisen_nimi;
    std::cout << "Anna koiran nimi: ";
    std::cin >> koiran_nimi;

    std::cout << std::endl;

    Ihminen* isanta = new Ihminen(ihmisen_nimi);
    Koira* rekku = new Koira(koiran_nimi);

    isanta->KavelytaKoiraa(7);
    rekku->Hauku();

    isanta->OtaVastuuKoirasta(rekku);
    isanta->KavelytaKoiraa(7);

    rekku->Hauku();
}