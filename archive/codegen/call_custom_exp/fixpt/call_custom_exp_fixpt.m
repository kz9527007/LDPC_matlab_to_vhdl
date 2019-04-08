%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%                                                                          %
%           Generated by MATLAB 9.5 and Fixed-Point Designer 6.2           %
%                                                                          %
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%#codegen
function y = call_custom_exp_fixpt(x)
    fm = get_fimath();

    y = fi(replacement_custom_fnc(x), 1, 14, 9, fm);
end

function [y] = custom_fnc(x)

    fm = get_fimath();

    y = fi(exp(x), 0, 14, -1, fm);

end


%
% Copyright 2019 The MathWorks, Inc.

% calculate replacement_custom_fnc via lookup table between extents x = fi([-10,10]),
% interpolation degree  = 1, number of points = 1024
function y = replacement_custom_fnc( x )
    persistent LUT
    if ( isempty(LUT) )
        T = numerictype( false, 14, -1);   
        LUT = fi([4.53999297624848e-05, 4.62962470279542e-05, 4.72102600177248e-05, ...
	4.81423180932012e-05, 4.90927775131254e-05, 5.00620015697498e-05, ...
	5.10503607276971e-05, 5.20582327655627e-05, 5.3086002920312e-05, ...
	5.41340640345287e-05, 5.52028167065706e-05, 5.62926694436892e-05, ...
	5.74040388181729e-05, 5.85373496265723e-05, 5.96930350520697e-05, ...
	6.08715368300537e-05, 6.20733054169626e-05, 6.32988001624622e-05, ...
	6.45484894850212e-05, 6.58228510509546e-05, 6.7122371957001e-05, ...
	6.84475489165043e-05, 6.97988884492719e-05, 7.11769070751805e-05, ...
	7.25821315116048e-05, 7.40150988747432e-05, 7.5476356884919e-05, ...
	7.69664640759345e-05, 7.8485990008558e-05, 8.00355154882264e-05, ...
	8.16156327870445e-05, 8.32269458701692e-05, 8.48700706266607e-05, ...
	8.65456351048933e-05, 8.8254279752613e-05, 8.99966576617346e-05, ...
	9.17734348179715e-05, 9.35852903553945e-05, 9.54329168160154e-05, ...
	9.73170204144966e-05, 9.92383213080857e-05, 0.00010119755387188, ...
	0.000103195466979525, 0.000105232824289455, 0.000107310404536786, ...
	0.000109429001830967, 0.000111589425959315, 0.000113792502696534, ...
	0.000116039074120355, 0.000118329998933395, 0.000120666152791382, ...
	0.000123048428637854, 0.000125477737045465, 0.000127955006564036, ...
	0.000130481184075468, 0.00013305723515567, 0.000135684144443626, ...
	0.000138362916017756, 0.0001410945737797, 0.000143880161845682, ...
	0.0001467207449456, 0.00014961740883, 0.000152571260685073, ...
	0.00015558342955586, 0.000158655066777798, 0.0001617873464168, ...
	0.000164981465718008, 0.00016823864556342, 0.000171560130938542, ...
	0.000174947191408258, 0.000178401121602091, 0.000181923241709052, ...
	0.000185514897982245, 0.000189177463253451, 0.000192912337457858, ...
	0.000196720948169154, 0.000200604751145193, 0.00020456523088442, ...
	0.000208603901193287, 0.00021272230576488, 0.000216922018768953, ...
	0.000221204645453625, 0.000225571822758951, 0.000230025219942602, ...
	0.000234566539217909, 0.000239197516404488, 0.000243919921591729, ...
	0.000248735559815365, 0.000253646271747411, 0.000258653934399721, ...
	0.000263760461841436, 0.000268967805930589, 0.000274277957060166, ...
	0.000279692944918888, 0.000285214839267013, 0.00029084575072746, ...
	0.000296587831592546, 0.000302443276646652, 0.000308414324005133, ...
	0.000314503255969787, 0.000320712399901216, 0.000327044129108408, ...
	0.00033350086375588, 0.000340085071788738, 0.000346799269875989, ...
	0.000353646024372487, 0.000360627952299864, 0.000367747722346828, ...
	0.000375008055889213, 0.000382411728030162, 0.000389961568660855, ...
	0.000397660463542164, 0.000405511355407682, 0.00041351724508851, ...
	0.000421681192660261, 0.000430006318612712, 0.000438495805042533, ...
	0.000447152896869584, 0.000455980903077206, 0.000464983197977013, ...
	0.000474163222498644, 0.000483524485504986, 0.000493070565133361, ...
	0.000502805110163184, 0.000512731841410638, 0.000522854553150866, ...
	0.000533177114568254, 0.000543703471235342, 0.000554437646620928, ...
	0.000565383743627958, 0.000576545946161764, 0.000587928520729273, ...
	0.000599535818069784, 0.000611372274817945, 0.000623442415199558, ...
	0.000635750852760865, 0.000648302292131973, 0.000661101530825099, ...
	0.000674153461068313, 0.00068746307167548, 0.000701035449953133, ...
	0.000714875783644976, 0.000728989362914792, 0.000743381582368487, ...
	0.000758057943116061, 0.00077302405487429, 0.000788285638110911, ...
	0.000803848526231151, 0.000819718667807414, 0.000835902128852995, ...
	0.000852405095140679, 0.000869233874567116, 0.000886394899563879, ...
	0.000903894729556117, 0.000921740053469753, 0.000939937692288178, ...
	0.000958494601659422, 0.000977417874554799, 0.00099671474398004, ...
	0.00101639258573995, 0.00103645892125764, 0.00105692142044945, ...
	0.00107778790465657, 0.0010990663496346, 0.00112076488860212, ...
	0.00114289181534939, 0.00116545558740852, 0.00118846482928614, ...
	0.00121192833575994, 0.00123585507524029, 0.0012602541931982, ...
	0.001285135015661, 0.00131050705277697, 0.00133638000245042, ...
	0.00136276375404852, 0.00138966839218121, 0.00141710420055593, ...
	0.00144508166590824, 0.00147361148201022, 0.0015027045537579, ...
	0.00153237200133941, 0.00156262516448543, 0.00159347560680357, ...
	0.00162493512019829, 0.0016570157293781, 0.00168972969645175, ...
	0.00172308952561512, 0.00175710796793074, 0.00179179802620152, ...
	0.00182717295994086, 0.00186324629044074, 0.00190003180594001, ...
	0.00193754356689459, 0.00197579591135177, 0.00201480346043066, ...
	0.00205458112391074, 0.00209514410593082, 0.00213650791080049, ...
	0.00217868834892629, 0.00222170154285491, 0.00226556393343566, ...
	0.00231029228610463, 0.00235590369729292, 0.00240241560096136, ...
	0.00244984577526427, 0.00249821234934476, 0.00254753381026421, ...
	0.00259782901006854, 0.00264911717299397, 0.0027014179028151, ...
	0.00275475119033798, 0.00280913742104119, 0.00286459738286773, ...
	0.00292115227417076, 0.00297882371181619, 0.00303763373944528, ...
	0.00309760483590029, 0.0031587599238166, 0.00322112237838429, ...
	0.00328471603628288, 0.00334956520479232, 0.00341569467108395, ...
	0.00348312971169482, 0.00355189610218913, 0.00362202012701033, ...
	0.00369352858952781, 0.00376644882228187, 0.003840808697431, ...
	0.00391663663740541, 0.00399396162577086, 0.00407281321830698, ...
	0.00415322155430439, 0.00423521736808466, 0.00431883200074796, ...
	0.00440409741215242, 0.00449104619313011, 0.00457971157794419, ...
	0.00467012745699194, 0.00476232838975864, 0.00485634961802721, ...
	0.00495222707934852, 0.00504999742077783, 0.00514969801288225, ...
	0.00525136696402484, 0.00535504313493073, 0.00546076615354072, ...
	0.00556857643015823, 0.00567851517289524, 0.0057906244034232, ...
	0.00590494697303486, 0.00602152657902326, 0.00614040778138408, ...
	0.00626163601984767, 0.00638525763124742, 0.00651131986723101, ...
	0.00663987091232129, 0.00677095990233375, 0.00690463694315766, ...
	0.00704095312990787, 0.00717996056645487, 0.00732171238534028, ...
	0.00746626276808567, 0.0076136669659022, 0.00776398132080921, ...
	0.00791726328716972, 0.00807357145365108, 0.00823296556561923, ...
	0.00839550654797503, 0.00856125652844149, 0.00873027886131071, ...
	0.00890263815165968, 0.00907840028004411, 0.00925763242767992, ...
	0.00944040310212168, 0.0096267821634482, 0.00981684085096495, ...
	0.0100106518104338, 0.0102082891218401, 0.0104098283277084, ...
	0.0106153464619767, 0.010824922079441, 0.0110386352857812, ...
	0.0112565677681799, 0.0114788028265452, 0.0117054254053504, ...
	0.0119365221261024, 0.0121721813204503, 0.0124124930639491, ...
	0.0126575492104881, 0.0129074434274008, 0.0131622712312668, ...
	0.0134221300244212, 0.0136871191321842, 0.0139573398408261, ...
	0.014232895436282, 0.0145138912436301, 0.0148004346673506, ...
	0.0150926352323779, 0.0153906046259646, 0.0156944567403717, ...
	0.0160043077164008, 0.0163202759877867, 0.0166424823264662, ...
	0.0169710498887404, 0.0173061042623485, 0.0176477735144708, ...
	0.01799618824068, 0.018351481614858, 0.018713789440099, ...
	0.0190832502006171, 0.0194600051146791, 0.0198441981885816, ...
	0.0202359762716948, 0.0206354891125921, 0.0210428894162882, ...
	0.0214583329026076, 0.0218819783657045, 0.0223139877347589, ...
	0.0227545261358703, 0.0232037619551734, 0.0236618669032002, ...
	0.0241290160805124, 0.0246053880446298, 0.0250911648782803, ...
	0.0255865322589965, 0.0260916795300871, 0.0266067997730095, ...
	0.0271320898811704, 0.0276677506351845, 0.028213986779618, ...
	0.0287710071012484, 0.0293390245088678, 0.0299182561146632, ...
	0.030508923317203, 0.0311112518860609, 0.0317254720481124, ...
	0.0323518185755334, 0.0329905308755366, 0.0336418530818801, ...
	0.0343060341481818, 0.0349833279430767, 0.0356739933472524, ...
	0.0363782943524007, 0.0370965001621226, 0.0378288852948254, ...
	0.0385757296886515, 0.0393373188084784, 0.0401139437550316, ...
	0.0409059013761513, 0.0417134943802561, 0.0425370314520463, ...
	0.0433768273704926, 0.0442332031291525, 0.0451064860588638, ...
	0.0459970099528593, 0.0469051151943519, 0.047831148886639, ...
	0.0487754649857743, 0.0497384244358607, 0.0507203953070126, ...
	0.0517217529360429, 0.0527428800699272, 0.0537841670121003, ...
	0.0548460117716414, 0.0559288202154042, 0.0570330062231504, ...
	0.0581589918457464, 0.0593072074664831, 0.0604780919655799, ...
	0.0616720928879378, 0.062889666614203, 0.0641312785352086, ...
	0.0653974032298602, 0.0666885246465329, 0.0680051362880504, ...
	0.0693477414003151, 0.0707168531646634, 0.0721129948940174, ...
	0.0735367002329102, 0.0749885133614597, 0.0764689892033693, ...
	0.0779786936380357, 0.0795182037168435, 0.0810881078837308, ...
	0.0826890062001085, 0.084321510574221, 0.0859862449950346, ...
	0.0876838457707435, 0.0894149617719847, 0.0911802546798546, ...
	0.0929803992388221, 0.0948160835146346, 0.0966880091573164, ...
	0.0985968916693587, 0.100543460679205, 0.102528460220135, ...
	0.104552649014657, 0.106616800764509, 0.108721704446393, ...
	0.110868164613543, 0.113057001703245, 0.115289052350437, ...
	0.117565169707488, 0.119886223770301, 0.122253101710849, ...
	0.124666708216274, 0.127127965834691, 0.129637815327801, ...
	0.132197216030488, 0.134807146217495, 0.137468603477352, ...
	0.140182605093683, 0.142950188434038, 0.145772411346405, ...
	0.148650352563548, 0.151585112115333, 0.154577811749185, ...
	0.157629595358853, 0.160741629421642, 0.163915103444268, ...
	0.167151230417524, 0.170451247279917, 0.173816415390464, ...
	0.177248021010814, 0.180747375796899, 0.18431581730028, ...
	0.1879547094794, 0.191665443220928, 0.195449436871392, ...
	0.199308136779312, 0.203243017848036, 0.207255584099489, ...
	0.211347369249052, 0.215519937291788, 0.219774883100254, ...
	0.224113833034093, 0.228538445561687, 0.23305041189406, ...
	0.237651456631314, 0.242343338421814, 0.247127850634396, ...
	0.25200682204384, 0.256982117529882, 0.262055638790024, ...
	0.267229325066411, 0.272505153887068, 0.277885141821767, ...
	0.283371345252814, 0.288965861161057, 0.294670827927413, ...
	0.300488426150213, 0.306420879478692, 0.312470455462926, ...
	0.318639466420557, 0.324930270320626, 0.331345271684849, ...
	0.3378869225067, 0.344557723188628, 0.35136022349778, ...
	0.358297023540595, 0.365370774756639, 0.372584180932058, ...
	0.379939999233039, 0.387441041259681, 0.395090174120662, ...
	0.402890321529133, 0.410844464920242, 0.418955644590718, ...
	0.427226960860964, 0.435661575260083, 0.444262711734304, ...
	0.453033657879263, 0.461977766196617, 0.471098455375461, ...
	0.48039921159905, 0.489883589877315, 0.499555215405686, ...
	0.509417784950747, 0.519475068263237, 0.529730909518964, ...
	0.540189228788148, 0.550854023533788, 0.561729370139601, ...
	0.572819425468131, 0.584128428449619, 0.595660701702242, ...
	0.607420653184335, 0.619412777879243, 0.631641659513422, ...
	0.644111972308474, 0.656828482767762, 0.669796051498303, ...
	0.683019635068628, 0.696504287903321, 0.710255164214963, ...
	0.724277519974214, 0.738576714918798, 0.753158214602138, ...
	0.768027592482448, 0.783190532053066, 0.798652829014841, ...
	0.814420393491415, 0.830499252288238, 0.84689555119618, ...
	0.863615557340629, 0.880665661576956, 0.898052380933286, ...
	0.915782361101481, 0.933862378977319, 0.952299345250806, ...
	0.97110030704764, 0.990272450622818, 1.00982310410742, ...
	1.02975974030965, 1.05008997957111, 1.07082159267954, ...
	1.09196250383904, 1.11352079369888, 1.13550470244219, ...
	1.15792263293559, 1.18078315394097, 1.20409500339072, ...
	1.22786709172766, 1.25210850531078, 1.27682850988837, ...
	1.30203655413963, 1.32774227328618, 1.35395549277497, ...
	1.38068623203382, 1.40794470830112, 1.43574134053114, ...
	1.46408675337646, 1.492991781249, 1.52246747246126, ...
	1.55252509344926, 1.5831761330789, 1.61443230703735, ...
	1.64630556231108, 1.67880808175235, 1.71195228873585, ...
	1.74575085190723, 1.78021669002545, 1.81536297690065, ...
	1.8512031464296, 1.88775089773046, 1.92502020037902, ...
	1.96302529974819, 2.00178072245308, 2.0413012819034, ...
	2.08160208396557, 2.12269853273667, 2.16460633643222, ...
	2.2073415133904, 2.25092039819462, 2.29535964791711, ...
	2.34067624848573, 2.3868875211764, 2.43401112923386, ...
	2.48206508462301, 2.53106775491358, 2.58103787030077, ...
	2.63199453076443, 2.6839572133696, 2.73694577971121, ...
	2.79098048350575, 2.84608197833276, 2.90227132552925, ...
	2.95957000223993, 3.01799990962637, 3.07758338123822, ...
	3.13834319154975, 3.20030256466487, 3.26348518319405, ...
	3.32791519730648, 3.39361723396091, 3.46061640631881, ...
	3.5289383233433, 3.5986090995876, 3.66965536517677, ...
	3.7421042759865, 3.8159835240228, 3.89132134800671, ...
	3.96814654416791, 4.04648847725145, 4.12637709174178, ...
	4.20784292330836, 4.29091711047727, 4.37563140653322, ...
	4.46201819165654, 4.55011048529979, 4.63994195880875, ...
	4.73154694829251, 4.82496046774772, 4.92021822244193, ...
	5.01735662256112, 5.11641279712672, 5.21742460818732, ...
	5.32043066529067, 5.42547034024129, 5.53258378214949, ...
	5.64181193277746, 5.75319654218841, 5.8667801847046, ...
	5.98260627518038, 6.10071908559667, 6.22116376198287, ...
	6.34398634167296, 6.46923377090228, 6.59695392275168, ...
	6.72719561544597, 6.86000863101359, 6.99544373431471, ...
	7.13355269244501, 7.27438829452246, 7.41800437186486, ...
	7.56445581856563, 7.71379861247591, 7.86608983660086, ...
	8.02138770091835, 8.17975156462849, 8.34124195884237, ...
	8.50592060971873, 8.67385046205745, 8.8450957033588, ...
	9.01972178835772, 9.19779546404246, 9.37938479516713, ...
	9.56455919026797, 9.75338942819323, 9.94594768515687, ...
	10.1423075623263, 10.3425441139547, 10.5467338760692, ...
	10.7549548957246, 10.9672867608357, 11.1838106305976, ...
	11.4046092665071, 11.6297670639967, 11.8593700846925, ...
	12.0935060893099, 12.3322645711978, 12.5757367905455, ...
	12.824015809265, 13.0771965265619, 13.3353757152085, ...
	13.5986520585331, 13.8671261881395, 14.1409007223711, ...
	14.4200803055347, 14.7047716478985, 14.9950835664797, ...
	15.2911270266371, 15.5930151844858, 15.9008634301483, ...
	16.2147894318596, 16.5349131809438, 16.8613570376778, ...
	17.1942457780608, 17.5337066415076, 17.8798693794827, ...
	18.2328663050949, 18.5928323436713, 18.9599050843296, ...
	19.3342248325682, 19.7159346638952, 20.1051804785158, ...
	20.5021110570993, 20.9068781176473, 21.3196363734848, ...
	21.7405435923958, 22.1697606569265, 22.6074516258792, ...
	23.0537837970201, 23.5089277710256, 23.9730575166899, ...
	24.4463504374216, 24.9289874390515, 25.4211529989805, ...
	25.9230352366916, 26.4348259856547, 26.9567208666507, ...
	27.4889193625431, 28.0316248945261, 28.5850448998779, ...
	29.1493909112488, 29.7248786375152, 30.3117280462295, ...
	30.9101634476978, 31.5204135807177, 32.1427117000085, ...
	32.777295665368, 33.4244080325888, 34.0842961461704, ...
	34.7572122338606, 35.4434135030646, 36.1431622391566, ...
	36.8567259057327, 37.5843772468428, 38.3263943912414, ...
	39.083060958696, 39.8546661683942, 40.6415049494922, ...
	41.4438780538442, 42.2620921709585, 43.0964600452231, ...
	43.9473005954449, 44.8149390367496, 45.6997070048883, ...
	46.6019426829976, 47.5219909308629, 48.4602034167334, ...
	49.4169387517397, 50.3925626269648, 51.3874479532218, ...
	52.4019750035905, 53.4365315587687, 54.4915130552929, ...
	55.567322736685, 56.6643718075836, 57.7830795909177, ...
	58.9238736881835, 60.0871901428863, 61.2734736072081, ...
	62.4831775119662, 63.7167642399271, 64.9747053025425, ...
	66.2574815201738, 67.5655832058755, 68.8995103528063, ...
	70.2597728253406, 71.6468905539531, 73.0613937339506, ...
	74.5038230281277, 75.9747297734232, 77.4746761916566, ...
	79.0042356044248, 80.5639926522422, 82.1545435180063, ...
	83.7764961548755, 85.4304705186461, 87.1170988047168, ...
	88.8370256897312, 90.5909085779917, 92.3794178527373, ...
	94.2032371323837, 96.0630635318207, 97.9596079288694, ...
	99.8935952359997, 101.865764677412, 103.876870071589, ...
	105.927680119428, 108.018978698057, 110.151565160458, ...
	112.326254640999, 114.543878367004, 116.805283976468, ...
	119.111335842052, 121.462915401467, 123.860921494387, ...
	126.306270706008, 128.799897717396, 131.342755662744, ...
	133.935816493691, 136.580071350826, 139.27653094253, ...
	142.026225931301, 144.830207327697, 147.689546892063, ...
	150.605337544191, 153.57869378106, 156.610752102831, ...
	159.70267144725, 162.855633632624, 166.070843809546, ...
	169.349530921537, 172.692948174784, 176.10237351715, ...
	179.579110126641, 183.124486909517, 186.739859008239, ...
	190.426608319439, 194.186144022125, 198.019903116302, ...
	201.92935097224, 205.915981890577, 209.98131967348, ...
	214.126918207091, 218.354362055459, 222.66526706621, ...
	227.061280988167, 231.544084101168, 236.115389858311, ...
	240.776945540891, 245.530532926253, 250.377968968842, ...
	255.321106494692, 260.36183490963, 265.502080921455, ...
	270.743809276387, 276.089023510042, 281.539766713241, ...
	287.098122312941, 292.766214868572, 298.546210884109, ...
	304.440319636166, 310.45079401845, 316.579931402872, ...
	322.830074517674, 329.203612342881, 335.702981023438, ...
	342.330664800374, 349.089196960344, 355.98116080393, ...
	363.009190633043, 370.175972757831, 377.484246523464, ...
	384.936805357184, 392.536497836033, 400.286228775662, ...
	408.188960340628, 416.24771317662, 424.465567565034, ...
	432.845664600341, 441.391207390705, 450.105462282296, ...
	458.991760107784, 468.053497459473, 477.294137987575, ...
	486.717213724117, 496.326326432977, 506.125148986584, ...
	516.117426769793, 526.306979111471, 536.697700744358, ...
	547.293563293739, 558.098616795513, 569.116991244226, ...
	580.352898171678, 591.810632256683, 603.494572966615, ...
	615.409186231369, 627.55902615036, 639.948736733227, ...
	652.583053674907, 665.46680616575, 678.604918737368, ...
	692.002413144932, 705.664410286628, 719.596132161003, ...
	733.802903862967, 748.290155619189, 763.063424863681, ...
	778.128358354362, 793.490714331411, 809.156364718221, ...
	825.131297365818, 841.421618341584, 858.033554263165, ...
	874.973454678464, 892.247794492613, 909.863176442861, ...
	927.826333622333, 946.144132053598, 964.823573313062, ...
	983.871797207163, 1003.29608450141, 1023.10385970329, ...
	1043.30269390012, 1063.90030765295, 1084.90457394755, ...
	1106.32352120371, 1128.1653363439, 1150.43836792256, ...
	1173.15112931717, 1196.31230198226, 1219.93073876773, ...
	1244.01546730266, 1268.57569344591, 1293.62080480487, ...
	1319.16037432365, 1345.20416394216, 1371.76212832736, ...
	1398.84441867823, 1426.46138660585, 1454.62358809006, ...
	1483.34178751426, 1512.62696177988, 1542.49030450201, ...
	1572.94323028796, 1603.99737910021, 1635.66462070557, ...
	1667.9570592121, 1700.88703769565, 1734.46714291774, ...
	1768.71021013655, 1803.62932801297, 1839.23784361338, ...
	1875.54936751132, 1912.57777898982, 1950.33723134646, ...
	1988.84215730316, 2028.10727452272, 2068.14759123442, ...
	2108.97841197049, 2150.61534341599, 2193.07430037411, ...
	2236.37151184924, 2280.52352725016, 2325.54722271571, ...
	2371.45980756527, 2418.27883087671, 2466.02218819408, ...
	2514.70812836783, 2564.35526053001, 2614.98256120723, ...
	2666.60938157399, 2719.25545484925, 2772.94090383902, ...
	2827.68624862787, 2883.51241442229, 2940.44073954885, ...
	2998.49298361036, 3057.69133580296, 3118.05842339746, ...
	3179.61732038814, 3242.39155631227, 3306.40512524374, ...
	3371.68249496428, 3438.24861631573, 3506.12893273698, ...
	3575.34938998911, 3645.93644607263, 3717.91708134046, ...
	3791.31880881058, 3866.16968468228, 3942.49831906, ...
	4020.33388688894, 4099.70613910656, 4180.64541401416, ...
	4263.18264887311, 4347.34939172987, 4433.17781347459, ...
	4520.70072013768, 4609.95156542923, 4700.96446352596, ...
	4793.77420211057, 4888.41625566862, 4984.92679904786, ...
	5083.34272128524, 5183.70163970698, 5286.04191430692, ...
	5390.40266240885, 5496.82377361817, 5605.34592506888, ...
	5716.0105969715, 5828.86008846795, 5943.93753379951, ...
	6061.28691879389, 6180.95309767788, 6302.9818102219, ...
	6427.41969922297, 6554.31432833299, 6683.71420023878, ...
	6815.66877520129, 6950.22848996061, 7087.44477701434, ...
	7227.37008427655, 7370.0578951248, 7515.56274884304, ...
	7663.94026146802, 7815.24714704728, 7969.54123931693, ...
	8126.88151380723, 8287.32811038474, 8450.94235623947, ...
	8617.78678932586, 8787.92518226647, 8961.42256672778, ...
	9138.345258277, 9318.76088172982, 9502.7383969985, ...
	9690.34812545024, 9881.66177678603, 10076.7524764501, ...
	10275.6947935804, 10478.5647695113, 10685.4399468384, ...
	10896.3993990576, 11111.5237607895, 11330.8952585995, ...
	11554.597742428, 11782.7167176395, 12015.3393777054, ...
	12252.5546375319, 12494.4531674455, 12741.12742785, ...
	12992.6717045674, 13249.1821448766, 13510.7567942632, ...
	13777.495633896, 14049.5006188419, 14326.8757170363, ...
	14609.7269490227, 14898.1624284763, 15192.2924035284, ...
	15492.2292989064, 15798.0877589055, 16109.9846912089, ...
	16428.0393115732, 16752.3731893965, 17083.1102941849, ...
	17420.3770429376, 17764.3023484669, 18115.0176686722, ...
	18472.6570567871, 18837.357212618, 19209.257534795, ...
	19588.5001740537, 19975.2300875692, 20369.5950943627, ...
	20771.7459318026, 21181.83631322, 21600.0229866622, ...
	22026.4657948067, ], numerictype(T),fimath(x));
    end
    x_idx = fi((x - -10)*51.15,1,18,6,fimath(x));
    idx_bot =  floor(x_idx);
        x_idx(:) = x_idx  + 1; 
    if ( idx_bot >= fi(1024,numerictype(idx_bot),fimath(x)) )
                idx_bot = fi((1023),numerictype(idx_bot),fimath(x));
    elseif ( idx_bot <= fi(0,numerictype(idx_bot),fimath(x)) )
        idx_bot = fi(1,numerictype(idx_bot),fimath(x));
    end
       idx_top = fi(idx_bot+1,numerictype(idx_bot),fimath(x));
       x_bot = idx_bot;
       x_top = idx_top;

       y_bot = LUT(idx_bot);
       y_top = LUT(idx_top);
        y = y_top*(x_idx-x_bot) + ...
            y_bot*(x_top - x_idx);
end

function fm = get_fimath()
	fm = fimath('RoundingMethod', 'Floor',...
	     'OverflowAction', 'Wrap',...
	     'ProductMode','FullPrecision',...
	     'MaxProductWordLength', 128,...
	     'SumMode','FullPrecision',...
	     'MaxSumWordLength', 128);
end
