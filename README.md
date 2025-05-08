# Wiki to Markdown

![](files/watar%20pokimon.jpeg)
*ta slika je simbolična*

## Cilj tega progama

Spremenit wikilinks, ki jih uporablja Obsidian, v markdown
links, ki jih uporablja GitHub, da se bodo slike in povezave lahko prikazale na
remote repository-ju.

Potrebno je spremenit povezave datotek s končnicami:

- `png`
- `md`
- `excalidraw`

> [obsidian dokumentacija](https://help.obsidian.md/embeds)

Vem da obstaja ta [plugin](https://github.com/ozntel/obsidian-link-converter) in ta [command line tool](https://github.com/zoni/obsidian-export) , ki počneta isto stvar in še več. Všeč mi je programirat v C-ju, zato bom programiral v C-ju. 

> Sta pa bila v pomoč :3

## Kaj je wikilink?

Wikilink je formata `[[]]` ali `![[]]`. Presledki v imenu jih ne motijo, prav lahko izpusti imena direktorijev. Na primer, tu bi lahko pisali brez `files`:

```
![[files/watar pokimon.jpeg]]
```

![](files/watar%20pokimon.jpeg)

Lahko se pojavijo tudi v obliki 

```
![[watar pokimon.png|300]]
```

![300](files/watar%20pokimon.jpeg)

ali pa 

```
![[watar pokimon.png|800x60]]
```

![800x60](files/watar%20pokimon.jpeg)

V Obsidian lahko tako prilagodiš velikost slike (kar se lahko prevede tudi v markdown link).

> `.excalidraw` datoteke GitHub žal ne more renderat, zato jih je treba
> exportat v `png` ročno.

## Kaj je markdown link?

Markdown link je oblike `[]()`. Prostor med `[]` je lahko
prazen, ampak v `()` je potrebno podati relativno (ali absolutno) pot do datoteke.

Če se pojavijo v imenu presledki, jih je potrebno nadomestit z `%20`:

- `![](files/watar pokimon.png)` - NE
- `![](files/watar%20pokimon.png)` - JA

S parametrom za velikost je lahko povezava

```
![200](files/watar%20pokimon.jpeg
```

![200](files/watar%20pokimon.jpeg)

ali pa 

```
![50x100](files/watar%20pokimon.jpeg)
```

![100x250](files/watar%20pokimon.jpeg)

# Usage

```bash
sudo apt install cmake make # sry windows
chmod +x run.sh # za execution pravice
./run.sh # build-a in zažene program
```