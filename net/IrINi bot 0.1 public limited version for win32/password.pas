unit password;

interface

Const
pwds : Array[1..1876] of string = ('',
'123',
'1234',
'12345',
'123456',
'1234567',
'12345678',
'123456789',
'1234567890',
'0987654321',
'987654321',
'87654321',
'7654321',
'654321',
'54321',
'4321',
'321',
'21',
'0000',
'00000',
'000000',
'0000000',
'00000000',
'11111111',
'88888888',
'111111',
'121212',
'123',
'123123',
'123abc',
'123go',
'1313',
'131313',
'1p2o3i',
'1q2w3e',
'2222',
'369',
'4444',
'520',
'54321',
'5555',
'5683',
'654321',
'666666',
'777',
'7777',
'80486',
'888888',
'99999999',
'@#$%^&',
'pass',
'passwd',
'password',
'database',
'admin',
'root',
'abcd',
'abc123',
'secret',
'oracle',
'sybase',
'test',
'123qwe',
'server',
'computer',
'Internet',
'super',
'ultra',
'mega',
'great',
'123asd',
'!@',
'!@#',
'!@#$',
'!@#$%',
'!@#$%^',
'!@#$%^&',
'!@#$%^&*',
'administrator',
'ihavenopass',
'godblessyou',
'!@#$%^&*()',
'enable',
'xp',
'2000',
'2001',
'2002',
'2003',
'2600',
'0',
'1',
'2',
'3',
'4',
'5',
'6',
'7',
'8',
'9',
'00',
'11',
'22',
'33',
'44',
'55',
'66',
'77',
'88',
'99',
'000',
'111',
'222',
'333',
'444',
'555',
'666',
'777',
'888',
'999',
'0000',
'1111',
'2222',
'3333',
'4444',
'5555',
'6666',
'7777',
'8888',
'9999',
'110',
'111111',
'121212',
'123123',
'1234qwer',
'123abc',
'007',
'abc',
'alpha',
'beta',
'opentable',
'backup',
'BackupExec',
'User1',
'User',
'User2',
'User3',
'azerty',
'qwerty',
'ups',
'home',
'ntl',
'store',
'star',
'adsl',
'*',
'a',
'aaa',
'aaaaaa',
'abc',
'abc123',
'abcd',
'abcd1234',
'abcde',
'abcdef',
'abcdefg',
'access',
'action',
'active',
'adam',
'adidas',
'adrian',
'aggies',
'aikman',
'airhead',
'alaska',
'albert',
'alex',
'alexande',
'alexandr',
'alexis',
'alfred',
'alice',
'alicia',
'aliens',
'alison',
'allen',
'allison',
'allo',
'alpha',
'alpine',
'alyssa',
'amanda',
'amber',
'amelie',
'america',
'amiga',
'amour',
'amy',
'anderson',
'andre',
'andrea',
'andrew',
'andy',
'angel',
'angela',
'angels',
'angie',
'angus',
'animal',
'animals',
'anna',
'anne',
'annie',
'anthony',
'apache',
'apollo',
'apple',
'apples',
'april',
'archie',
'arctic',
'ariane',
'ariel',
'arizona',
'arthur',
'artist',
'asdf',
'asdfg',
'asdfgh',
'asdfghjk',
'asdfjkl',
'asdfjkl;',
'aspen',
'ass',
'asshole',
'asterix',
'ath',
'athena',
'attila',
'august',
'austin',
'author',
'avalon',
'avatar',
'awesome',
'aylmer',
'babies',
'baby',
'babylon',
'bach',
'badboy',
'badger',
'bailey',
'balls',
'bamboo',
'banana',
'bananas',
'banane',
'bandit',
'barbara',
'barbie',
'barney',
'barry',
'basebal',
'baseball',
'basf',
'basil',
'basket',
'basketb',
'basketba',
'bastard',
'batman',
'beagle',
'beaner',
'beanie',
'bear',
'bears',
'beatles',
'beautifu',
'beaver',
'beavis',
'beer',
'belle',
'benjamin',
'benny',
'benoit',
'benson',
'bernard',
'bernie',
'bertha',
'betty',
'bigbird',
'bigdog',
'bigfoot',
'bigmac',
'bigman',
'bigred',
'bilbo',
'bill',
'billy',
'bingo',
'binky',
'biology',
'bird',
'birdie',
'bitch',
'biteme',
'black',
'blackie',
'blaster',
'blazer',
'blizzard',
'blonde',
'blondie',
'blowfish',
'blowme',
'blue',
'bluebird',
'bluesky',
'bmw',
'bob',
'bobby',
'bobcat',
'bond',
'boner',
'bonjour',
'bonnie',
'booboo',
'booger',
'boogie',
'bookit',
'boomer',
'booster',
'boots',
'bootsie',
'boris',
'boss',
'boston',
'bowling',
'bozo',
'bradley',
'brandi',
'brandon',
'brandy',
'brasil',
'braves',
'brazil',
'brenda',
'brewster',
'brian',
'bridge',
'bridges',
'bright',
'broncos',
'brooke',
'browns',
'bruce',
'brutus',
'bubba',
'bubbles',
'buck',
'buddha',
'buddy',
'buffalo',
'buffy',
'bull',
'bulldog',
'bullet',
'bullshit',
'bunny',
'business',
'buster',
'butch',
'butler',
'butthead',
'button',
'buttons',
'buzz',
'byteme',
'cactus',
'caesar',
'caitlin',
'californ',
'calvin',
'camaro',
'camera',
'campbell',
'camping',
'canada',
'canced',
'cancer',
'candy',
'canela',
'cannon',
'cannonda',
'canon',
'captain',
'cardinal',
'carl',
'carlos',
'carmen',
'carol',
'carole',
'carolina',
'caroline',
'carrie',
'cascade',
'casey',
'casio',
'casper',
'cassie',
'castle',
'cat',
'catalog',
'catfish',
'cats',
'cccccc',
'cedic',
'celica',
'celine',
'celtics',
'center',
'cesar',
'cfi',
'cfj',
'cgj',
'challeng',
'champion',
'champs',
'chance',
'chanel',
'changeme',
'chaos',
'chapman',
'charity',
'charles',
'charlie',
'charlott',
'cheese',
'chelsea',
'cherry',
'cheryl',
'chester',
'chevy',
'chicago',
'chicken',
'chico',
'chiefs',
'china',
'chip',
'chipper',
'chiquita',
'chloe',
'chocolat',
'chris',
'chrissy',
'christ',
'christia',
'christin',
'christop',
'christy',
'chuck',
'chucky',
'church',
'cinder',
'cindi',
'cindy',
'claire',
'clancy',
'clark',
'class',
'classroo',
'claude',
'claudia',
'cleaner',
'clipper',
'cloclo',
'clover',
'cobra',
'cocacola',
'coco',
'coffee',
'coke',
'colleen',
'college',
'colorado',
'coltrane',
'columbia',
'compaq',
'compton',
'compute',
'computer',
'concept',
'connect',
'connie',
'conrad',
'control',
'cookie',
'cookies',
'cool',
'coolman',
'cooper',
'copper',
'corona',
'corrado',
'corwin',
'cosmos',
'cougar',
'cougars',
'country',
'courtney',
'cowboy',
'cowboys',
'coyote',
'cracker',
'craig',
'crapp',
'crawford',
'creative',
'cricket',
'crow',
'cruise',
'crystal',
'cuddles',
'curtis',
'cutie',
'cyclone',
'cynthia',
'cyrano',
'daddy',
'daisy',
'dakota',
'dallas',
'dan',
'dance',
'dancer',
'daniel',
'danielle',
'danny',
'darren',
'darwin',
'dasha',
'database',
'dave',
'david',
'dawn',
'daytek',
'dead',
'deadhead',
'dean',
'death',
'debbie',
'december',
'deedee',
'defense',
'deliver',
'delta',
'demo',
'denali',
'denise',
'dennis',
'denver',
'depeche',
'derek',
'design',
'detroit',
'deutsch',
'dexter',
'diablo',
'diamond',
'diana',
'diane',
'dickhead',
'digger',
'digital',
'dilbert',
'direct',
'director',
'dirk',
'disney',
'dixie',
'doc',
'doctor',
'dodger',
'dodgers',
'dog',
'dogbert',
'doggie',
'doggy',
'dollars',
'dolphin',
'dolphins',
'dominic',
'domino',
'don',
'donald',
'donkey',
'donna',
'doobie',
'doogie',
'dookie',
'doom',
'dorothy',
'doug',
'dougie',
'douglas',
'dragon',
'dream',
'dreamer',
'dreams',
'drizzt',
'drums',
'duck',
'duckie',
'dude',
'duke',
'dundee',
'dustin',
'dusty',
'dwight',
'dylan',
'e-mail',
'eagle',
'eagles',
'easter',
'eatme',
'eclipse',
'eddie',
'edward',
'eeyore',
'einstein',
'elaine',
'electric',
'elephant',
'elizabet',
'ellen',
'elliot',
'elsie',
'elvis',
'elwood',
'email',
'emily',
'emmitt',
'energy',
'enigma',
'enter',
'entropy',
'eric',
'espanol',
'etoile',
'eugene',
'europe',
'excalibu',
'except',
'explorer',
'export',
'express',
'faith',
'falcon',
'family',
'farmer',
'farming',
'felix',
'fender',
'ferrari',
'ferret',
'fgh',
'fiction',
'fiona',
'fire',
'fireball',
'firebird',
'fireman',
'first',
'fish',
'fisher',
'fishing',
'flamingo',
'flash',
'fletch',
'fletcher',
'flight',
'flip',
'flipper',
'florida',
'flower',
'flowers',
'floyd',
'fluffy',
'flyers',
'foobar',
'fool',
'footbal',
'football',
'ford',
'forest',
'fountain',
'fox',
'foxtrot',
'fozzie',
'france',
'francis',
'francois',
'frank',
'frankie',
'franklin',
'fred',
'freddy',
'frederic',
'freedom',
'french',
'friday',
'friend',
'friends',
'frodo',
'frog',
'froggy',
'frogs',
'front',
'frosty',
'fubar',
'fucker',
'fuckme',
'fuckoff',
'fuckyou',
'fugazi',
'fun',
'future',
'gabriel',
'gabriell',
'gaby',
'galaxy',
'galileo',
'gambit',
'gandalf',
'garden',
'garfield',
'garlic',
'garnet',
'garrett',
'gary',
'gasman',
'gateway',
'gator',
'gemini',
'general',
'genesis',
'genius',
'george',
'georgia',
'gerald',
'german',
'ghost',
'giants',
'gibson',
'gilles',
'ginger',
'gizmo',
'glenn',
'global',
'go',
'goalie',
'goat',
'goblue',
'gocougs',
'godzilla',
'gofish',
'goforit',
'gold',
'golden',
'goldie',
'golf',
'golfer',
'golfing',
'gone',
'goober',
'goofy',
'gopher',
'gordon',
'grace',
'grandma',
'grant',
'graphic',
'grateful',
'gray',
'graymail',
'green',
'greenday',
'greg',
'gregory',
'gretchen',
'gretzky',
'griffey',
'groovy',
'grover',
'grumpy',
'guess',
'guest',
'guido',
'guinness',
'guitar',
'gunner',
'gymnast',
'h2opolo',
'hacker',
'hal',
'hammer',
'hamster',
'hanna',
'hannah',
'hansolo',
'hanson',
'happy',
'happyday',
'harley',
'harold',
'harrison',
'harry',
'harvey',
'hatton',
'hawaii',
'hawk',
'hawkeye',
'hazel',
'health',
'heart',
'hearts',
'heather',
'hector',
'heidi',
'helen',
'hell',
'hello',
'help',
'helpme',
'hendrix',
'henry',
'herbert',
'herman',
'hermes',
'hershey',
'history',
'hobbit',
'hockey',
'hola',
'holly',
'home',
'homebrew',
'homer',
'honda',
'honey',
'hoops',
'hootie',
'horizon',
'hornet',
'hornets',
'horse',
'horses',
'hotdog',
'hotrod',
'house',
'houston',
'howard',
'hunter',
'hunting',
'huskers',
'icecream',
'iceman',
'idiot',
'iguana',
'iloveyou',
'image',
'imagine',
'impala',
'indian',
'indiana',
'indigo',
'info',
'informix',
'insane',
'inside',
'intel',
'intern',
'internet',
'ireland',
'irene',
'irish',
'ironman',
'isaac',
'isabelle',
'isis',
'island',
'italia',
'italy',
'jack',
'jackie',
'jackson',
'jacob',
'jaeger',
'jaguar',
'jake',
'jamaica',
'james',
'jan',
'jane',
'janice',
'january',
'japan',
'jared',
'jasmin',
'jasmine',
'jason',
'jasper',
'jazz',
'jean',
'jeanette',
'jeanne',
'jeff',
'jeffrey',
'jenifer',
'jenni',
'jennifer',
'jenny',
'jensen',
'jeremy',
'jerry',
'jessica',
'jessie',
'jester',
'jesus',
'jewels',
'jim',
'jimbo',
'jimbob',
'jkm',
'joanna',
'joe',
'joel',
'joey',
'john',
'johnny',
'johnson',
'jojo',
'joker',
'jonathan',
'jordan',
'joseph',
'josh',
'joshua',
'josie',
'jsbach',
'judith',
'judy',
'julia',
'julian',
'julie',
'junebug',
'junior',
'jupiter',
'justice',
'justin',
'karen',
'katherin',
'kathleen',
'kathryn',
'kathy',
'katie',
'kayla',
'keith',
'kelly',
'kelsey',
'kennedy',
'kenneth',
'kermit',
'kevin',
'khan',
'kids',
'killer',
'killme',
'kim',
'kimberly',
'kinder',
'king',
'kingdom',
'kingfish',
'kitten',
'kittens',
'kitty',
'kleenex',
'knicks',
'knight',
'knights',
'koala',
'koko',
'kombat',
'kramer',
'kristen',
'kristi',
'kristin',
'kristy',
'krystal',
'lacrosse',
'laddie',
'lady',
'ladybug',
'lakers',
'lakota',
'lamer',
'larry',
'larson',
'laser',
'laura',
'lauren',
'laurie',
'law',
'ledzep',
'lee',
'legend',
'lennon',
'leon',
'leonard',
'leslie',
'lestat',
'letmein',
'letter',
'library',
'light',
'lincoln',
'linda',
'lindsay',
'lindsey',
'lionking',
'lisa',
'little',
'liverpoo',
'lizard',
'lloyd',
'logan',
'logical',
'london',
'looney',
'lorraine',
'loser',
'louis',
'louise',
'love',
'lovely',
'loveme',
'lover',
'loveyou',
'lucas',
'lucky',
'lucy',
'lulu',
'lynn',
'mac',
'macha',
'macintos',
'maddock',
'maddog',
'madison',
'maggie',
'magic',
'magnum',
'mailer',
'mailman',
'major',
'majordom',
'malcolm',
'malibu',
'mantra',
'marc',
'marcel',
'marcus',
'margaret',
'maria',
'mariah',
'marie',
'marilyn',
'marina',
'marine',
'marino',
'mario',
'mariposa',
'mark',
'market',
'marlboro',
'marley',
'mars',
'marshal',
'martha',
'martin',
'marty',
'marvin',
'mary',
'maryjane',
'master',
'masters',
'math',
'matrix',
'matt',
'matthew',
'maurice',
'maveric',
'maverick',
'max',
'maxime',
'maxwell',
'mazda',
'mayday',
'me',
'medical',
'megan',
'melanie',
'melissa',
'memory',
'memphis',
'meow',
'mercedes',
'mercury',
'merlin',
'metal',
'metallic',
'mexico',
'michael',
'michel',
'michele',
'michell',
'michelle',
'mickey',
'micro',
'midnight',
'midori',
'mikael',
'mike',
'mikey',
'miki',
'miles',
'miller',
'millie',
'million',
'mimi',
'mindy',
'mine',
'minnie',
'minou',
'mirage',
'miranda',
'mirror',
'misha',
'mishka',
'mission',
'missy',
'misty',
'mitch',
'mitchell',
'mittens',
'modem',
'molly',
'molson',
'mom',
'monday',
'monet',
'money',
'monica',
'monique',
'monkey',
'monopoly',
'monster',
'montana',
'montreal',
'moocow',
'mookie',
'moomoo',
'moon',
'moose',
'morgan',
'moroni',
'morris',
'mortimer',
'mother',
'mountain',
'mouse',
'mozart',
'muffin',
'murphy',
'music',
'mustang',
'nancy',
'naomi',
'napoleon',
'nascar',
'nat',
'natasha',
'nathan',
'nautica',
'ncc',
'ne',
'nebraska',
'nellie',
'nelson',
'nemesis',
'nesbitt',
'netware',
'network',
'new',
'newcourt',
'newpass',
'news',
'newton',
'newuser',
'newyork',
'nguyen',
'nicarao',
'nicholas',
'nick',
'nicole',
'niki',
'nikita',
'nimrod',
'niners',
'nirvana',
'nissan',
'nite',
'none',
'norman',
'nothing',
'notused',
'nss',
'nugget',
'number',
'nurse',
'oatmeal',
'obiwan',
'october',
'olive',
'oliver',
'olivia',
'olivier',
'one',
'online',
'open',
'opus',
'orange',
'oranges',
'orchid',
'orion',
'orlando',
'oscar',
'ou',
'oxford',
'pacers',
'pacific',
'packard',
'packer',
'packers',
'painter',
'paladin',
'pamela',
'panda',
'pandora',
'pantera',
'panther',
'papa',
'paris',
'parker',
'parrot',
'pascal',
'pass',
'passion',
'passwd',
'passwor',
'password',
'pat',
'patches',
'patricia',
'patrick',
'paul',
'paula',
'peace',
'peaches',
'peanut',
'pearl',
'pearljam',
'pebbles',
'pedro',
'peewee',
'peggy',
'penelope',
'penguin',
'penny',
'pentium',
'people',
'pepper',
'pepsi',
'percy',
'perry',
'pete',
'peter',
'petey',
'petunia',
'phantom',
'phil',
'philip',
'phillip',
'phish',
'phoenix',
'photo',
'piano',
'picard',
'picasso',
'pickle',
'picture',
'pierce',
'pierre',
'piglet',
'pinkfloy',
'pirate',
'pisces',
'pizza',
'planet',
'plato',
'play',
'playboy',
'player',
'players',
'please',
'pluto',
'pmc',
'poiuyt',
'polaris',
'police',
'politics',
'polo',
'pomme',
'poohbear',
'pookie',
'popcorn',
'popeye',
'porsche',
'porter',
'portland',
'power',
'ppp',
'praise',
'preston',
'prince',
'princess',
'prof',
'promethe',
'property',
'protel',
'psalms',
'psycho',
'public',
'puckett',
'pumpkin',
'punkin',
'puppies',
'puppy',
'puppy123',
'purple',
'pyramid',
'python',
'quality',
'quebec',
'quest',
'qwaszx',
'qwert',
'qwerty',
'rabbit',
'racerx',
'rachel',
'racing',
'racoon',
'radio',
'raider',
'raiders',
'rain',
'rainbow',
'raistlin',
'rambo',
'random',
'randy',
'ranger',
'raptor',
'raquel',
'rascal',
'rasta',
'raven',
'raymond',
'reader',
'reading',
'reality',
'rebecca',
'rebels',
'red',
'reddog',
'redrum',
'redskin',
'redwing',
'reebok',
'reefer',
'reggie',
'remember',
'renee',
'republic',
'research',
'retard',
'reynolds',
'reznor',
'rhonda',
'richard',
'ricky',
'ripper',
'river',
'robbie',
'robert',
'robin',
'robinhoo',
'robotech',
'rock',
'rocket',
'rocky',
'rodman',
'roger',
'roman',
'ronald',
'rooster',
'roping',
'rose',
'rosebud',
'roses',
'rosie',
'roxy',
'roy',
'royal',
'royals',
'ruby',
'rufus',
'rugby',
'runner',
'running',
'russel',
'russell',
'rusty',
'ruth',
'rux',
'ruy',
'ryan',
'sabrina',
'sadie',
'safety',
'sailing',
'sailor',
'sales',
'sally',
'salmon',
'salut',
'sam',
'samantha',
'sammie',
'sammy',
'sampler',
'sampson',
'samson',
'samuel',
'sanders',
'sandra',
'sandy',
'sango',
'santa',
'sapphire',
'sarah',
'sasha',
'saskia',
'sassy',
'saturn',
'savage',
'sbdc',
'scarlet',
'scarlett',
'school',
'science',
'scooby',
'scooter',
'scorpio',
'scorpion',
'scotch',
'scott',
'scotty',
'scout',
'scruffy',
'scuba',
'sean',
'seattle',
'secret',
'security',
'sendit',
'senior',
'septembe',
'sergei',
'service',
'seven',
'sexy',
'shadow',
'shadows',
'shalom',
'shannon',
'shanti',
'shark',
'sharon',
'shawn',
'sheba',
'sheena',
'sheila',
'shelby',
'shelley',
'shelly',
'sherry',
'shirley',
'shit',
'shithead',
'shoes',
'shooter',
'shorty',
'shotgun',
'sidney',
'sierra',
'silver',
'simba',
'simon',
'simple',
'singer',
'skater',
'skeeter',
'skidoo',
'skiing',
'skinny',
'skipper',
'skippy',
'slacker',
'slayer',
'smashing',
'smile',
'smiles',
'smiley',
'smiths',
'smokey',
'snake',
'snapple',
'snicker',
'snickers',
'sniper',
'snoopdog',
'snoopy',
'snow',
'snowbal',
'snowman',
'snuffy',
'soccer',
'softball',
'soleil',
'sonics',
'sonny',
'sophie',
'space',
'spain',
'spanish',
'spanky',
'sparky',
'sparrow',
'special',
'speech',
'speedo',
'speedy',
'spencer',
'spider',
'spike',
'spirit',
'spitfire',
'spooky',
'sports',
'spring',
'sprite',
'spunky',
'squirt',
'ssssss',
'stacey',
'stanley',
'star',
'stargate',
'start',
'startrek',
'starwars',
'station',
'stealth',
'steele',
'steelers',
'stella',
'steph',
'stephani',
'stephen',
'steve',
'steven',
'stever',
'stimpy',
'sting',
'stingray',
'stinky',
'storm',
'stormy',
'strat',
'strawber',
'strider',
'stuart',
'student',
'studly',
'stupid',
'success',
'sugar',
'summer',
'sun',
'sunbird',
'sundance',
'sunday',
'sunflowe',
'sunny',
'sunrise',
'sunset',
'sunshin',
'sunshine',
'super',
'superman',
'support',
'supra',
'surf',
'surfer',
'susan',
'suzanne',
'suzuki',
'sweetie',
'sweetpea',
'sweets',
'sweety',
'swimmer',
'swimming',
'sydney',
'sylvia',
'sylvie',
'symbol',
'system',
't-bone',
'tacobell',
'taffy',
'tamara',
'tammy',
'tandy',
'tango',
'tanker',
'tanner',
'tanya',
'tara',
'tardis',
'target',
'tarzan',
'tasha',
'tattoo',
'taurus',
'taylor',
'tazman',
'teacher',
'teachers',
'tech',
'techno',
'teddy',
'telecom',
'temp',
'temporal',
'tennis',
'tequila',
'teresa',
'terry',
'test',
'test123',
'tester',
'testing',
'testtest',
'texas',
'theatre',
'theboss',
'theking',
'theman',
'theresa',
'thomas',
'thumper',
'thunder',
'thunderb',
'thursday',
'thx',
'tiffany',
'tiger',
'tigers',
'tigger',
'tigre',
'tim',
'timber',
'time',
'timothy',
'tina',
'tinker',
'tinman',
'tintin',
'toby',
'today',
'tom',
'tomcat',
'tommy',
'tony',
'tootsie',
'topcat',
'topgun',
'topher',
'toronto',
'toyota',
'tractor',
'tracy',
'training',
'travel',
'travis',
'trebor',
'trek',
'trevor',
'tricia',
'trident',
'tristan',
'trixie',
'trouble',
'truck',
'trucks',
'trumpet',
'tucker',
'tuesday',
'turbo',
'turtle',
'tweety',
'twins',
'tyler',
'undead',
'unicorn',
'user1',
'utopia',
'vader',
'valentin',
'valerie',
'valhalla',
'vampire',
'vanessa',
'vanilla',
'velvet',
'venus',
'vermont',
'veronica',
'vette',
'vicky',
'victor',
'victoria',
'victory',
'video',
'viking',
'vikings',
'vincent',
'violet',
'viper',
'virginia',
'visa',
'vision',
'volley',
'volleyb',
'volvo',
'voodoo',
'voyager',
'walker',
'walleye',
'wally',
'walter',
'wanker',
'warcraft',
'warez',
'warner',
'warren',
'warrior',
'warriors',
'water',
'watson',
'wayne',
'weasel',
'webmaste',
'webster',
'weezer',
'welcome',
'wendy',
'wesley',
'western',
'whales',
'whateve',
'whatever',
'wheeling',
'wheels',
'whisky',
'white',
'whitney',
'wicked',
'wilbur',
'wildcat',
'william',
'williams',
'willie',
'willow',
'DotCom2',
'willy',
'wilson',
'win95',
'win98',
'win2000',
'win2k',
'windows',
'windsurf',
'winner',
'winnie',
'winnt',
'winston',
'winter',
'wisdom',
'wizard',
'wolf',
'wolf1',
'wolfgang',
'wolfman',
'wolverin',
'wolves',
'wombat',
'wonder',
'woodland',
'woody',
'wqsb',
'wrangler',
'wrestle',
'wright',
'xanadu',
'xavier',
'xcountry',
'xfiles',
'xxx',
'xxxx',
'yamaha',
'yankees',
'yellow',
'yoda',
'yomama',
'young',
'yvonne',
'zachary',
'zapata',
'zaphod',
'zebra',
'zenith',
'zephyr',
'zeppelin',
'zeus',
'zhongguo',
'ziggy',
'zombie',
'zorro',
'zxcvb',
'zxcvbnm'
);


implementation

end.
