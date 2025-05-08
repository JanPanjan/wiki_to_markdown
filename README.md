# Cilj tega progama

Spremenit wikilinks, ki jih uporablja Obsidian, v markdown
links, ki jih uporablja GitHub, da se bodo slike lahko prikazale na
remote repository-ju.

## Kaj je wikilink?

Wikilink je formata `[[]]` ali `![[]]`. Potrebno je spremeniti
povezav s klicajem, toda le tiste, katerih imena datotek se končajo
na `png` in sicer `![[moja-slika.png]]`.

Lahko se pojavijo tudi v obliki `![]moja-slika.png|<int>]]`.
V Obsidian lahko tako prilagodiš velikost slike. Žal tega ne moreš
prevest v markdown link, zato bo to odstranjeno.

> `.excalidraw` datoteke GitHub žal ne more renderat, zato jih je treba
> exportat v `png` ročno.
> > Can this program do it..?

## Kaj je markdown link?

Markdown link je oblike `[]()`. Prostor med `[]` je lahko
prazen, ampak v `()` je potrebno podati pot do datoteke (npr. `![](moja-slika.png)`).

Če se pojavijo v imenu presledki, jih je potrebno nadomestit z `%`:

- `![](moja slika.png)` - NE
- `![](moja%slika.png)` - JA

##  Kaj torej?

- `![[moja-slika.png]]` => `![](moja-slika.png)`
- `![[moja slika.png]]` => `![](moja%slika.png)`
- `![[moja-slika.png|<int>]]` => `![](moja-slika.png)`
- `![[moja slika.png|<int>]]` => `![](moja%slika.png)`
- `![[moja-slika.excalidraw]]` => `![](moja-slika.png)`***
- `![[moja slika.excalidraw]]` => `![](moja%slika.png)`***

# Usage

```bash
sudo apt install cmake make # sry windows
chmod +x run.sh # za execution pravice
./run.sh # build-a in zažene program
```