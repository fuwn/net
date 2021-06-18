/*
 XXXXX   XXXXXX   XXXXXXX   XXX XXX XXXXXXX   XXXXX
XXX XXX  XXX XXX  XX  XXX   XXX XXX XXXXXXXX XXX XXX
XXXXXXX  XXX XXX     XXX    XXX XXX XXXXXXXX XXXXXXX
XXX      XXX XXX   XXX      XXX XXX XXXXXXXX XXX
XXX XXX  XXX XXX  XXX  XX    XXXXX  XXXXXXXX XXX XXX
 XXXXX   XXX XXX  XXXXXXX      XXX  XXX  XXX  XXXXX
                              XXX               .v2b
                           XXXXX
 ____________________
+ enzyme ..v2b       +
| nzm rxbot mod ..   |
| private release *  |
| 04.04.05	         |
+____________________+
		      ____________________
 		     + code from ..       +
		     | bcuzz              |
		     | stoney  		      |
		     | x-lock	          |
		     | ionix              |
		     | phatty		      |
		     | nesespray	      |
		     | rbot dev team 	  |
		     +____________________+
 ____________________
+ read ..            +
| the docs           |
| don't ..           |
| mass distribute    |
+____________________+

*/

const char *nicklist[] = {
	"Abdulrazak",
	"Ackerman",
	"Adams",
	"Addison",
	"Adelstein",
	"Adibe",
	"Adorno",
	"Ahlers",
	"Alavi",
	"Alcorn",
	"Alda",
	"Aleks",
	"Allison",
	"Alongi",
	"Altavilla",
	"Altenberger",
	"Altenhofen",
	"Amaral",
	"Amatangelo",
	"Ameer",
	"Amsden",
	"Anand",
	"Andel",
	"Ando",
	"Andrelus",
	"Andron",
	"Anfinrud",
	"Ansley",
	"Anthony",
	"Antos",
	"Arbia",
	"Arduini",
	"Arellano",
	"Aristotle",
	"Arjas",
	"Arky",
	"Atkins",
	"Augustus",
	"Aurelius",
	"Axelrod",
	"Axworthy",
	"Ayiemba",
	"Aykroyd",
	"Ayling",
	"Azima",
	"Bachmuth",
	"Backus",
	"Bady",
	"Baglivo",
	"Bagnold",
	"Bailar",
	"Bakanowsky",
	"Baleja",
	"Ballatori",
	"Ballew",
	"Baltz",
	"Banta",
	"Barabesi",
	"Barajas",
	"Baranczak",
	"Baranowska",
	"Barberi",
	"Barbetti",
	"Barneson",
	"Barnett",
	"Barriola",
	"Barry",
	"Bartholomew",
	"Bartolome",
	"Bartoo",
	"Basavappa",
	"Bashevis",
	"Batchelder",
	"Baumiller",
	"Bayles",
	"Bayo",
	"Beacon",
	"Beal",
	"Bean",
	"Beckman",
	"Beder",
	"Bedford",
	"Behenna",
	"Belanger",
	"Belaoussof",
	"Belfer",
	"Belin-Collart",
	"Bellavance",
	"Bellhouse",
	"Bellini",
	"Belloc",
	"Benedict-Dye",
	"Bergson",
	"Berke-Jenkins",
	"Bernardo",
	"Bernassola",
	"Bernston",
	"Berrizbeitia",
	"Betti",
	"Beynart",
	"Biagioli",
	"Bickel",
	"Binion",
	"Bir",
	"Bisema",
	"Bisho",
	"Blackbourn",
	"Blackwell",
	"Blagg",
	"Blakemore",
	"Blanke",
	"Bliss",
	"Blizard",
	"Bloch",
	"Bloembergen",
	"Bloemhof",
	"Bloxham",
	"Blyth",
	"Bolger",
	"Bolick",
	"Bollinger",
	"Bologna",
	"Boner",
	"Bonham",
	"Boniface",
	"Bontempo",
	"Book",
	"Bookbinder",
	"Boone",
	"Boorstin",
	"Borack",
	"Borden",
	"Bossi",
	"Bothman",
	"Botosh",
	"Boudin",
	"Boudrot",
	"Bourneuf",
	"Bowers",
	"Boxer",
	"Boyajian",
	"Boyes",
	"Boyland",
	"Boym",
	"Boyne",
	"Bracalente",
	"Bradac",
	"Bradach",
	"Brecht",
	"Breed",
	"Brenan",
	"Brennan",
	"Brewer",
	"Brewer",
	"Bridgeman",
	"Bridges",
	"Brinton",
	"Britz",
	"Broca",
	"Brook",
	"Brzycki",
	"Buchan",
	"Budding",
	"Bullard",
	"Bunton",
	"Burden",
	"Burdzy",
	"Burke",
	"Burridge",
	"Busetta",
	"Byatt",
	"Byerly",
	"Byrd",
	"Cage",
	"Calnan",
	"Cammelli",
	"Cammilleri",
	"Canley",
	"Capanni",
	"Caperton",
	"Capocaccia",
	"Capodilupo",
	"Cappuccio",
	"Capursi",
	"Caratozzolo",
	"Carayannopoulos",
	"Carlin",
	"Carlos",
	"Carlyle",
	"Carmichael",
	"Caroti",
	"Carper",
	"Cartmill",
	"Cascio",
	"Case",
	"Caspar",
	"Castelda",
	"Cavanagh",
	"Cavell",
	"Ceniceros",
	"Cerioli",
	"Chapman",
	"Charles",
	"Cheang",
	"Cherry",
	"Chervinsky",
	"Chiassino",
	"Chien",
	"Childress",
	"Childs",
	"Chinipardaz",
	"Chinman",
	"Christenson",
	"Christian",
	"Christiano",
	"Christie",
	"Christopher",
	"Chu",
	"Chupasko",
	"Church",
	"Ciampaglia",
	"Cicero",
	"Cifarelli",
	"Claffey",
	"Clancy",
	"Clark",
	"Clement",
	"Clifton",
	"Clow",
	"Coblenz",
	"Coito",
	"Coldren",
	"Colella",
	"Collard",
	"Collis",
	"Compton",
	"Compton",
	"Comstock",
	"Concino",
	"Condodina",
	"Connors",
	"Corey",
	"Cornish",
	"Cosmides",
	"Counter",
	"Coutaux",
	"Crawford",
	"Crocker",
	"Croshaw",
	"Croxen",
	"Croxton",
	"Cui",
	"Currier",
	"Cutler",
	"Cvek",
	"Cyders",
	"daSilva",
	"Daldalian",
	"Daly",
	"D'Ambra",
	"Danieli",
	"Dante",
	"Dapice",
	"D'arcangelo",
	"Das",
	"Dasgupta",
	"Daskalu",
	"David",
	"Dawkins",
	"DeGennaro",
	"DeLaPena",
	"del'Enclos",
	"deRousse",
	"Debroff",
	"Dees",
	"Defeciani",
	"Delattre",
	"Deleon-Rendon",
	"Delger",
	"Dell'acqua",
	"Deming",
	"Dempster",
	"Demusz",
	"Denault",
	"Denham",
	"Denison",
	"Desombre",
	"Deutsch",
	"D'fini",
	"Dicks",
	"Diefenbach",
	"Difabio",
	"Difronzo",
	"Dilworth",
	"Dionysius",
	"Dirksen",
	"Dockery",
	"Doherty",
	"Donahue",
	"Donner",
	"Doonan",
	"Dore",
	"Dorf",
	"Dosi",
	"Doty",
	"Doug",
	"Dowsland",
	"Drinker",
	"D'souza",
	"Duffin",
	"Durrett",
	"Dussault",
	"Dwyer",
	"Eardley",
	"Ebeling",
	"Eckel",
	"Edley",
	"Edner",
	"Edward",
	"Eickenhorst",
	"Eliasson",
	"Elmendorf",
	"Elmerick",
	"Elvis",
	"Encinas",
	"Enyeart",
	"Eppling",
	"Erbach",
	"Erdman",
	"Erdos",
	"Erez",
	"Espinoza",
	"Estes",
	"Etter",
	"Euripides",
	"Everett",
	"Fabbris",
	"Fagan",
	"Faioes",
	"Falco-Acosta",
	"Falorsi",
	"Faris",
	"Farone",
	"Farren",
	"Fasso'",
	"Fates",
	"Feigenbaum",
	"Fejzo",
	"Feldman",
	"Fernald",
	"Fernandes",
	"Ferrante",
	"Ferriell",
	"Feuer",
	"Fido",
	"Field",
	"Fink",
	"Finkelstein",
	"Finnegan",
	"Fiorina",
	"Fisk",
	"Fitzmaurice",
	"Flier",
	"Flores",
	"Folks",
	"Forester",
	"Fortes",
	"Fortier",
	"Fossey",
	"Fossi",
	"Francisco",
	"Franklin-Kenea",
	"Franz",
	"Frazier-Davis",
	"Freid",
	"Freundlich",
	"Fried",
	"Friedland",
	"Frisken",
	"Frowiss",
	"Fryberger",
	"Frye",
	"Fujii-Abe",
	"Fuller",
	"Furth",
	"Fusaro",
	"Gabrielli",
	"Gaggiotti",
	"Galeotti",
	"Galwey",
	"Gambini",
	"Garfield",
	"Garman",
	"Garonna",
	"Geller",
	"Gemberling",
	"Georgi",
	"Gerrett",
	"Ghorai",
	"Gibbens",
	"Gibson",
	"Gilbert",
	"Gili",
	"Gill",
	"Gillispie",
	"Gist",
	"Gleason",
	"Glegg",
	"Glendon",
	"Goldfarb",
	"Goncalves",
	"Good",
	"Goodearl",
	"Goody",
	"Gozzi",
	"Gravell",
	"Greenberg",
	"Greenfeld",
	"Griffiths",
	"Grigoletto",
	"Grummell",
	"Gruner",
	"Gruppe",
	"Guenthart",
	"Gunn",
	"Guo",
	"Ha",
	"Haar",
	"Hackman",
	"Hackshaw",
	"Haley",
	"Halkias",
	"Hallowell",
	"Halpert",
	"Hambarzumjan",
	"Hamer",
	"Hammerness",
	"Hand",
	"Hanssen",
	"Harding",
	"Hargraves",
	"Harlow",
	"Harrigan",
	"Hartman",
	"Hartmann",
	"Hartnett",
	"Harwell",
	"Haviaras",
	"Hawkes",
	"Hayes",
	"Haynes",
	"Hazlewood",
	"Heermans",
	"Heft",
	"Heiland",
	"Hellman",
	"Hellmiss",
	"Helprin",
	"Hemphill",
	"Henery",
	"Henrichs",
	"Hernandez",
	"Herrera",
	"Hester",
	"Heubert",
	"Heyeck",
	"Himmelfarb",
	"Hind",
	"Hirst",
	"Hitchcock",
	"Hoang",
	"Hock",
	"Hoffer",
	"Hoffman",
	"Hokanson",
	"Hokoda",
	"Holmes",
	"Holoien",
	"Holter",
	"Holway",
	"Holzman",
	"Hooker",
	"Hopkins",
	"Horsley",
	"Hoshida",
	"Hostage",
	"Hottle",
	"Howard",
	"Hoy",
	"Huey",
	"Huidekoper",
	"Hungerford",
	"Huntington",
	"Hupp",
	"Hurtubise",
	"Hutchings",
	"Hyde",
	"Iaquinta",
	"Ichikawa",
	"Igarashi",
	"Inamura",
	"Inniss",
	"Isaac",
	"Isaievych",
	"Isbill",
	"Isserman",
	"Iyer",
	"Jacenko",
	"Jackson",
	"Jagers",
	"Jagger",
	"Jagoe",
	"Jain",
	"Jamil",
	"Janjigian",
	"Jarnagin",
	"Jarrell",
	"Jay",
	"Jeffers",
	"Jellis",
	"Jenkins",
	"Jespersen",
	"Jewett",
	"Johannesson",
	"Johannsen",
	"Johns",
	"Jolly",
	"Jorgensen",
	"Jucks",
	"Juliano",
	"Julious",
	"Kabbash",
	"Kaboolian",
	"Kafadar",
	"Kalbfleisch",
	"Kaligian",
	"Kalil",
	"Kalinowski",
	"Kalman",
	"Kamel",
	"Kangis",
	"Karpouzes",
	"Kassower",
	"Kasten",
	"Kawachi",
	"Kee",
	"Keenan",
	"Keepper",
	"Keith",
	"Kelker",
	"Kelsey",
	"Kempton",
	"Kemsley",
	"Kendall",
	"Kerry",
	"Keul",
	"Khong",
	"Kimmel",
	"Kimmett",
	"Kimura",
	"Kindall",
	"Kinsley",
	"Kippenberger",
	"Kirscht",
	"Kittridge",
	"Kleckner",
	"Kleiman",
	"Kleinfelder",
	"Klemperer",
	"Kling",
	"Klinkenborg",
	"Klint",
	"Knuff",
	"Kobrick",
	"Koch",
	"Kohn",
	"Koivumaki",
	"Kommer",
	"Koniaris",
	"Konrad",
	"Kool",
	"Korzybski",
	"Kotter",
	"Kovaks",
	"Kraemer",
	"Krailo",
	"Krasney",
	"Kraus",
	"Kroemer",
	"Krysiak",
	"Kuenzli",
	"Kumar",
	"Kusman",
	"Kuwabara",
	"La",
	"Labunka",
	"Lafler",
	"Laing",
	"Lallemant",
	"Landes",
	"Lankes",
	"Lantieri",
	"Lanzit",
	"Laserna",
	"Lashley",
	"Lawless",
	"Lecar",
	"Lecce",
	"Leclercq",
	"Leite",
	"Lenard",
	"l'Enclos",
	"Lesser",
	"Lessi",
	"Liakos",
	"Lidano",
	"Liem",
	"Light",
	"Lightfoot",
	"Lim",
	"Linares",
	"Linda",
	"Linder",
	"Line",
	"Linehan",
	"Linzee",
	"Lippmann",
	"Lipponen",
	"Little",
	"Litvak",
	"Livernash",
	"Livi",
	"Livolsi",
	"Lizardo",
	"Locatelli",
	"Longworth",
	"Loss",
	"Loveman",
	"Lowenstein",
	"Loza",
	"Lubin",
	"Lucas",
	"Luciano",
	"Luczkow",
	"Luecke",
	"Lunetta",
	"Luoma",
	"Lussier",
	"Lutcavage",
	"Luzader",
	"Ma",
	"Maccormac",
	"Macdonald",
	"Maceachern",
	"Macintyre",
	"Mackenney",
	"MacMillan",
	"Macy",
	"Madigan",
	"Maggio",
	"Mahony",
	"Maier",
	"Maine-Hershey",
	"Maisano",
	"Malatesta",
	"Maller",
	"Malova",
	"Manalis",
	"Mandel",
	"Manganiello",
	"Mantovan",
	"March",
	"Marchbanks",
	"Marcus",
	"Margalit",
	"Margetts",
	"Marques",
	"Martinez",
	"Martochio",
	"Marton",
	"Marubini",
	"Mass",
	"Matalka",
	"Matarazzo",
	"Matsukata",
	"Mattson",
	"Mauzy",
	"May",
	"Mazzali",
	"Mazziotta",
	"Mcbride",
	"Mccaffery",
	"Mccall",
	"Mcclearn",
	"Mcdowell",
	"Mcelroy",
	"McFadden",
	"Mcghee",
	"Mcgoldrick",
	"McIlroy",
	"Mcintosh",
	"Mckenna",
	"Mclane",
	"Mclaren",
	"Mcnealy",
	"Mcnulty",
	"Meccariello",
	"Memisoglu",
	"Menzies",
	"Merikoski",
	"Merlani",
	"Merminod",
	"Merseth",
	"Merz",
	"Metelka",
	"Metropolis",
	"Meurer",
	"Michelman",
	"Middle",
	"Mieher",
	"Mills",
	"Minh",
	"Mini",
	"Minichiello",
	"Gonzalez",
	"Mitropoulos",
	"Mittal",
	"Mocroft",
	"Modestino",
	"Moeller",
	"Mohr",
	"Moiamedi",
	"Monque",
	"Montilio",
	"MooreDeCh.",
	"Morani",
	"Moreton",
	"Morrison",
	"Morrow",
	"Mortimer",
	"Mosher",
	"Mosler",
	"Mostafavi",
	"Motooka",
	"Mudarri",
	"Muello",
	"Mugnai",
	"Mulkern",
	"Mulroy",
	"Mumford",
	"Mussachio",
	"Naddeo",
	"Napolitano",
	"Nardi",
	"Nardone",
	"Naviaux",
	"Nayduch",
	"Nelson",
	"Nenna",
	"Nesci",
	"Neuman",
	"Newfeld",
	"Newlin",
	"Ng",
	"Ni",
	"Nickerson",
	"Nickoloff",
	"Nisenson",
	"Nitabach",
	"Notman",
	"Nuzum",
	"Ocougne",
	"Ogata",
	"Oh",
	"O'hagan",
	"Oldford",
	"Olsen",
	"Olson",
	"Olszewski",
	"O'malley",
	"Oman",
	"O'meara",
	"Opel",
	"Oray",
	"Orfield",
	"Orsi",
	"Ospina",
	"Ostrowski",
	"Ottaviani",
	"Otten",
	"Ouchida",
	"Ovid",
	"PaesDealmeida",
	"Paine",
	"Palayoor",
	"Palepu",
	"Pallara",
	"Palmitesta",
	"Panadero",
	"Panizzon",
	"Pantilla",
	"Paoletti",
	"Parmeggiani",
	"Parris",
	"Partridge",
	"Pascucci",
	"Patefield",
	"Patrick",
	"Pattullo",
	"Pavetti",
	"Pavlon",
	"Pawloski",
	"Paynter",
	"Peabody",
	"Pearlberg",
	"Pederson",
	"Peishel",
	"Penny",
	"Pereira",
	"Perko",
	"Perlak",
	"Perlman",
	"Perna",
	"Perone",
	"Perrimon",
	"Peters",
	"Petruzello",
	"Pettibone",
	"Pettit",
	"Pfister",
	"Pilbeam",
	"Pinot",
	"Plancon",
	"Plant",
	"Plasket",
	"Plous",
	"Po",
	"Pocobene",
	"Poincaire",
	"Pointer",
	"Poirier",
	"Polak",
	"Polanyi",
	"Politis",
	"Poma",
	"Poolman",
	"Powers",
	"Presper",
	"Preucel",
	"Prevost",
	"Pritchard",
	"Pritz",
	"Proietti",
	"Prothrow-Stith",
	"Puccia",
	"Pugh",
	"Pynchon",
	"Quaday",
	"Quetin",
	"Rabe",
	"Rabkin",
	"Radeke",
	"Rajagopalan",
	"Raney",
	"Rangan",
	"Rankin",
	"Rapple",
	"Rayport",
	"Redden-Tyler",
	"Reedquist",
	"Cunningham",
	"Reinold",
	"Remak",
	"Renick",
	"Repetto",
	"Resnik",
	"Rhea",
	"Richmond",
	"Rielly",
	"Rindos",
	"Rineer",
	"Rish",
	"Rivera",
	"Robinson",
	"Rocha",
	"Roesler",
	"Rogers",
	"Ronen",
	"Row",
	"Royal",
	"Ru",
	"Ruan",
	"Ruderman",
	"Ruescher",
	"Rush",
	"Ryu",
	"Sabatello",
	"Sadler",
	"Safire",
	"Sahu",
	"Sali",
	"Samson",
	"Sanchez-Ramirez",
	"Sanna",
	"Sapers",
	"Sarin",
	"Sartore",
	"Sase",
	"Satin",
	"Satta",
	"Satterthwaite",
	"Sawtell",
	"Sayied",
	"Scarponi",
	"Scepan",
	"Scharf",
	"Scharlemann",
	"Scheiner",
	"Schiano",
	"Schifini",
	"Schilling",
	"Schmitt",
	"Schossberger",
	"Schuman",
	"Schutte",
	"Schuyler",
	"Schwan",
	"Schwickrath",
	"Scovel",
	"Scudder",
	"Seaton",
	"Seeber",
	"Segal",
	"Sekler",
	"Selvage",
	"Sen",
	"Sennett",
	"Seterdahl",
	"Sexton",
	"Seyfert",
	"Shaikh",
	"Shakis",
	"Shankland",
	"Shanley",
	"Shar",
	"Shatrov",
	"Shavelson",
	"Shea",
	"Sheats",
	"Shepherd",
	"Sheppard",
	"Shepstone",
	"Shesko",
	"Shia",
	"Shibata",
	"Shimon",
	"Siesto",
	"Sigalot",
	"Sigini",
	"Signa",
	"Silverman",
	"Silvetti",
	"Sinsabaugh",
	"Sirilli",
	"Sites",
	"Skane",
	"Skerry",
	"Skoda",
	"Sloan",
	"Slowe",
	"Smilow",
	"Sniffen",
	"Snodgrass",
	"Socolow",
	"Solon",
	"Somers",
	"Sommariva",
	"Sorabella",
	"Sorg",
	"Sottak",
	"Soukup",
	"Soule",
	"Soultanian",
	"Spanier",
	"Sparrow",
	"Spaulding",
	"Speizer",
	"Spence",
	"Sperber",
	"Spicer",
	"Spiegelhalter",
	"Spiliotis",
	"Spinrad",
	"StMartin",
	"Stalvey",
	"Stam",
	"Stang",
	"Stassinopolus",
	"States",
	"Statlender",
	"Stefani",
	"Steiner",
	"Stephanian",
	"Stepniewska",
	"Stewart-Oaten",
	"Stiepock",
	"Stillwell",
	"Stock",
	"Stockton",
	"Stockwell",
	"Stolzenberg",
	"Stonich",
	"Storer",
	"Stott",
	"Strange",
	"Strauch",
	"Streiff",
	"Stringer",
	"Sullivan",
	"Sumner",
	"Suo",
	"Surdam",
	"Sweeting",
	"Sweetser",
	"Swindle",
	"Tagiuri",
	"Tai",
	"Talaugon",
	"Tambiah",
	"Tandler",
	"Tanowitz",
	"Tatar",
	"Taveras",
	"Tawn",
	"Tcherepnin",
	"Teague",
	"Temes",
	"Temmer",
	"Tenney",
	"Terracini",
	"Than",
	"Thavaneswaran",
	"Theodos",
	"Thibault",
	"Thisted",
	"Thomsen",
	"Throop",
	"Tierney",
	"Till",
	"Timmons",
	"Tofallis",
	"Tollestrup",
	"Tolls",
	"Tolman",
	"Tomford",
	"Toomer",
	"Topulos",
	"Torresi",
	"Torske",
	"Towler",
	"Toye",
	"Traebert",
	"Trenga",
	"Trewin",
	"Tringali",
	"Troiani",
	"Troy",
	"Truss",
	"Tsiatis",
	"Tsomides",
	"Tsukurov",
	"Tuck",
	"Tudge",
	"Tukan",
	"Turano",
	"Turek",
	"Tuttle",
	"Twells",
	"Tzamarias",
	"Ullman",
	"Untermeyer",
	"Upsdell",
	"Urban",
	"Urdang-Brown",
	"Usdan",
	"Uzuner",
	"Vacca",
	"Waite",
	"Valberg",
	"Valencia",
	"Wales",
	"Wallenberg",
	"Walter",
	"vanAllen",
	"VanZwet",
	"Vandenberg",
	"Vanheeckeren",
	"Warshafsky",
	"Wasowska",
	"Vasquez",
	"Waugh",
	"Weighart",
	"Weingarten",
	"Weinhaus",
	"Weissbourd",
	"Weissman",
	"Velasquez",
	"Welles",
	"Welsh",
	"Wengret",
	"Venne",
	"Verghese",
	"Wescott",
	"Wetzel",
	"Whately",
	"Whilton",
	"White",
	"Whitla",
	"Whittaker",
	"Viana",
	"Viano",
	"Wiedersheim",
	"Wiener",
	"Viens",
	"Vignola",
	"Wilder",
	"Wilhelm",
	"Wilk",
	"Wilkin",
	"Wilkinson",
	"Villarreal",
	"Willstatter",
	"Wilson",
	"Vitali",
	"Viviani",
	"Voigt",
	"Wolk",
	"VonHoffman",
	"Woo",
	"Wooden",
	"Woods",
	"Woods-Powell",
	"Vorhaus",
	"Votey",
	"Yacono",
	"Yamane",
	"Yankee",
	"Yarchuk",
	"Yates",
	"Ybarra",
	"Yedidia",
	"Yesson",
	"Yetiv",
	"Yoffe",
	"Yoo",
	"Youk-See",
	"Yu",
	"Zachary",
	"Zahedi",
	"Zangwill",
	"Zegans",
	"Zerbini",
	"Zoldak",
	"Zucconi",
	"Zurn",
	"Zwiers",
	"Zytowski"
};
