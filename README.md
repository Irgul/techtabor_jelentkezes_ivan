Itt vannak a tulajdonképpeni kódok.

Ez egy régi projektem, amelyben egy játékot vizsgáltam, melynek lényege, hogy 100 szigeten élnek kövek, papírok és ollók, majd véletlenszerűen összesorsolunk két szigetet, és "csata" után mindkettő szigeten a nyertes(kő-papír-olló szabályok szerint) lesz. Változtattam az egyik "nép", általában az ollók kezdeti számát, majd vizsgáltam ennek a hatását a győzelmi(akkor nyer valaki, ha csak az ő népe él már(azaz kihalt az őt legyőző nép)) esélyekre. Kiírtam őket txt fileokba, majd excelben vizsgáltam az adatokat. Azért C++-t választottam, mert egy aránylag gyors, egyszerű nyelv, és ezzel van a legtöbb tapasztalatom. Ez egy modell, amit azért készítettem, hogy vizsgáljam olyan esetszámokra ezt a játokot, amelyekre kézzel már nem lehetséges. Érdekes megfigyelés volt(bár utólag érthető), hogy általában minnél nagyobb a kezdő ollószám, annál kisebb eséllyel nyertek az ollók. Az implementációban (igen elítélendő módon) globális változókat használtam, nem pointereket, ebben az esetben azonban csak végeredményere volt szükségem, és nem terveztem továbbfejleszteni a programot, hanem majd csak a fügvényeket viszem tovább, kis módosításokkal. A program tulajdonképpen lejátszik megadott számű játékot, majd kiértékeli és kiírja azokat.
Miután a sima kő-papír-olló esetre elfutattam pár szimulációt, elkezdtem gondolkozni, hogyan lehet továbbfejleszteni a problémt, és vegül egy másik, ötszereplős játékot kezdtem el vizsgálni. Itt a sárkány legyőzi a tündéket, orkokat, törpéket, akik hárman egymással kő-papír-olló szerint játszanak, és mind legyőzik a varázslót, aki viszont legyőzi a sárkányt. Ebben a játékban is futattam pár szimulációt, és meglepő módón a nyerési arányok(egyenlő számú kezdésre) igen erősen hasonlítottak annak a stratégiának a mutatási esélyeihez, amellyel mindenképpen döntetleneznénk egy ilyen játékban, ha kő-papír-olló szerűen egymás ellen játszanánk(sorrend szerint 3-1-1-1-3, ami meglepő kissé, de a tündéket, orkokat, törpéket, egy fajként értelmezve, amely magával is harcol, érthető).Ez a program is egy ilyen játékot szimulál, ugyanazokkal a megoldásokkal, de az eredményei (számomra legalábbis) érdekesebbek. 
//Elnézést, ha nem megfelelő formábann töltöttem föl githubra a fájlokat
