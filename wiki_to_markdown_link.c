/*
 * CILJ TEGA PROGAMA
 *
 *	   Spremenit wikilinks, ki jih uporablja Obsidian, v markdown
 *	   links, ki jih uporablja GitHub, da se bodo slike lahko prikazale na
 *     remote repository-ju.
 *
 * KAJ JE WIKILINK?
 *
 *	   Wikilink je formata `[[]]` ali `![[]]`. Potrebno je spremeniti
 *	   povezav s klicajem, toda le tiste, katerih imena datotek se končajo
 *	   na `.png` ali `.excalidraw`
 *
 *		   ![]moja-slika.png]]
 *
 *     Lahko se pojavijo tudi v obliki:
 *
 *		   ![]moja-slika.png|<int>]]
 *
 *     V Obsidian lahko tako prilagodiš velikost slike. Žal tega ne moreš
 *     prevest v markdown link, zato bo to odstranjeno.
 *
 * KAJ JE MARKDOWN LINK?
 *
 *	   Markdown link je oblike `[...](...)`. Prostor med `[]` je lahko
 *     prazen, ampak v `()` je potrebno podati pot datoteke. Primer:
 *
 *		   ![](moja-slika.png)
 *
 *	   Če se pojavijo v imenu presledki, jih je potrebno nadomestit z `%`:
 *
 *		   ![](moja slika.png)   (NE)
 *
 *		   ![](moja%slika.png)   (JA)
 *
 * KAJ TOREJ?
 *
 *		   ![[moja-slika.png]]       => ![](moja-slika.png)
 *		   ![[moja-slika.png|<int>]] => ![](moja-slika.png)
 */
