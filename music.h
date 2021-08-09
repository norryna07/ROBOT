//notele muzicale definite
#define REST 0
#define C0 16
#define CS0 17
#define DO 18
#define DS0 19
#define E0 21
#define F0 22
#define FS0 23
#define G0 25
#define GS0 26
#define A0 28
#define AS0 29
#define B0 31
#define C1 32
#define CS1 35
#define D1 37
#define DS1 39
#define E1 41
#define F1 44
#define FS1 46
#define G1 49
#define GS1 52
#define A1 55
#define AS1 58
#define B1 62
#define C2 65
#define CS2 69
#define D2 73
#define DS2 78
#define E2 82
#define F2 87
#define FS2 93
#define G2 98
#define GS2 104
#define A2 110
#define AS2 117
#define B2 123
#define C3 131
#define CS3 139
#define D3 147
#define E3 165
#define F3 175
#define FS3 185
#define G3 196
#define GS3 208
#define A3 220
#define AS3 233
#define B3 247
#define C4 262
#define CS4 277
#define D4 294
#define DS4 311
#define E4 329
#define F4 349
#define FS4 370
#define G4 392
#define GS4 415
#define A4 440
#define AS4 466
#define B4 494
#define C5 523
#define CS5 554
#define D5 587
#define DS5 622
#define E5 659
#define F5 699
#define FS5 740
#define G5 784
#define GS5 831
#define A5 880
#define AS5 932
#define B5 988
#define C6 1047
#define CS6 1109
#define D6 1175
#define DS6 1245
#define E6 1319
#define F6 1297
#define FS6 1480
#define G6 1268
#define GS6 1661
#define A6 1760
#define AS6 1865
#define B6 1976
#define C7 2093
#define CS7 2217
#define D7 2349
#define DS7 2489
#define E7 2637
#define F7 2794
#define FS7 2960
#define G7 3136
#define GS7 3322
#define A7 3520
#define AS7 3729
#define B7 3951
#define C8 4186
#define CS8 1135
#define D8 4699
#define DS8 4978
#define E8 5274
#define F8 5588
#define FS8 5920
#define G8 6272
#define GS8 6645
#define A8 7040
#define B8 7902

struct song
{
    int tempo;
    short notes[610];
    char fract[610];
    int nr_notes;
};

void play_song(song);

// TODO twinkle twinkle little star
void little_star_start()
{
    struct song little_star;
    little_star.notes[0]=D4; little_star.fract[0]=4;
    little_star.notes[1]=D4; little_star.fract[1]=4;
    little_star.notes[2]=A4; little_star.fract[2]=4;
    little_star.notes[3]=A4; little_star.fract[3]=4;
    little_star.notes[4]=B4; little_star.fract[4]=4;
    little_star.notes[5]=B4; little_star.fract[5]=4;
    little_star.notes[6]=A4; little_star.fract[6]=2;
    little_star.notes[7]=G4; little_star.fract[7]=4;
    little_star.notes[8]=G4; little_star.fract[8]=4;
    little_star.notes[9]=FS4; little_star.fract[9]=4;

    little_star.notes[10]=FS4; little_star.fract[10]=4;
    little_star.notes[11]=E4; little_star.fract[11]=4;
    little_star.notes[12]=E4; little_star.fract[12]=4;
    little_star.notes[13]=D4; little_star.fract[13]=2;
    little_star.notes[14]=A4; little_star.fract[14]=4;
    little_star.notes[15]=A4; little_star.fract[15]=4;
    little_star.notes[16]=G4; little_star.fract[16]=4;
    little_star.notes[17]=G4; little_star.fract[17]=4;
    little_star.notes[18]=FS4; little_star.fract[18]=4;
    little_star.notes[19]=FS4; little_star.fract[19]=4;

    little_star.notes[20]=E4; little_star.fract[20]=2;
    little_star.notes[21]=A4; little_star.fract[21]=4;
    little_star.notes[22]=A4; little_star.fract[22]=4;
    little_star.notes[23]=G4; little_star.fract[23]=4;
    little_star.notes[24]=G4; little_star.fract[24]=4;
    little_star.notes[25]=FS4; little_star.fract[25]=4;
    little_star.notes[26]=FS4; little_star.fract[26]=4;
    little_star.notes[27]=E4; little_star.fract[27]=2;
    little_star.notes[28]=D4; little_star.fract[28]=4;
    little_star.notes[29]=D4; little_star.fract[29]=4;

    little_star.notes[30]=A4; little_star.fract[30]=4;
    little_star.notes[31]=A4; little_star.fract[31]=4;
    little_star.notes[32]=B4; little_star.fract[32]=4;
    little_star.notes[33]=B4; little_star.fract[33]=4;
    little_star.notes[34]=A4; little_star.fract[34]=2;
    little_star.notes[35]=G4; little_star.fract[35]=4;
    little_star.notes[36]=G4; little_star.fract[36]=4;
    little_star.notes[37]=FS4; little_star.fract[37]=4;
    little_star.notes[38]=FS4; little_star.fract[38]=4;
    little_star.notes[39]=E4; little_star.fract[39]=4;

    little_star.notes[40]=E4; little_star.fract[40]=4;
    little_star.notes[41]=D4; little_star.fract[41]=4;

    little_star.nr_notes=42;
    little_star.tempo=144;
    play_song(little_star);
}

// TODO fur elise
void fur_elise_start()
{
    struct song fur_elise;
    //1
    fur_elise.notes[0]=E5; fur_elise.fract[0]=16;
    fur_elise.notes[1]=DS5; fur_elise.fract[1]=16;
    //2
    fur_elise.notes[2]=E5; fur_elise.fract[2]=16;
    fur_elise.notes[3]=DS5; fur_elise.fract[3]=16;
    fur_elise.notes[4]=E5; fur_elise.fract[4]=16;
    fur_elise.notes[5]=B4; fur_elise.fract[5]=16;
    fur_elise.notes[6]=D5; fur_elise.fract[6]=16;
    fur_elise.notes[7]=C5; fur_elise.fract[7]=16;
    //3
    fur_elise.notes[8]=A4; fur_elise.fract[8]=-8;
    fur_elise.notes[9]=C4; fur_elise.fract[9]=16;
    fur_elise.notes[10]=E4; fur_elise.fract[10]=16;
    fur_elise.notes[11]=A4; fur_elise.fract[11]=16;
    //4
    fur_elise.notes[12]=B4; fur_elise.fract[12]=-8;
    fur_elise.notes[13]=E4; fur_elise.fract[13]=16;
    fur_elise.notes[14]=GS4; fur_elise.fract[14]=16;
    fur_elise.notes[15]=B4; fur_elise.fract[15]=16;
    //5
    fur_elise.notes[16]=C5; fur_elise.fract[16]=8;
    fur_elise.notes[17]=REST; fur_elise.fract[17]=16;
    fur_elise.notes[18]=E4; fur_elise.fract[18]=16;
    fur_elise.notes[19]=E5; fur_elise.fract[19]=16;
    fur_elise.notes[20]=DS5; fur_elise.fract[20]=16;
    //6
    fur_elise.notes[21]=E5; fur_elise.fract[21]=16;
    fur_elise.notes[22]=DS5; fur_elise.fract[22]=16;
    fur_elise.notes[23]=E5; fur_elise.fract[23]=16;
    fur_elise.notes[24]=B4; fur_elise.fract[24]=16;
    fur_elise.notes[25]=D5; fur_elise.fract[25]=16;
    fur_elise.notes[26]=C5; fur_elise.fract[26]=16;
    //7
    fur_elise.notes[27]=A4; fur_elise.fract[27]=-8;
    fur_elise.notes[28]=C4; fur_elise.fract[28]=16;
    fur_elise.notes[29]=E4; fur_elise.fract[29]=16;
    fur_elise.notes[30]=A4; fur_elise.fract[30]=16;
    //8
    fur_elise.notes[31]=B4; fur_elise.fract[31]=-8;
    fur_elise.notes[32]=E5; fur_elise.fract[32]=16;
    fur_elise.notes[33]=C5; fur_elise.fract[33]=16;
    fur_elise.notes[34]=B4; fur_elise.fract[34]=16;
    //9
    fur_elise.notes[35]=A4; fur_elise.fract[35]=4;
    fur_elise.notes[36]=REST; fur_elise.fract[36]=8;
    //1
    fur_elise.notes[37]=E5; fur_elise.fract[37]=16;
    fur_elise.notes[38]=DS5; fur_elise.fract[38]=16;
    //2
    fur_elise.notes[39]=E5; fur_elise.fract[39]=16;
    fur_elise.notes[40]=DS5; fur_elise.fract[40]=16;
    fur_elise.notes[41]=E5; fur_elise.fract[41]=16;
    fur_elise.notes[42]=B4; fur_elise.fract[42]=16;
    fur_elise.notes[43]=D5; fur_elise.fract[43]=16;
    fur_elise.notes[44]=C5; fur_elise.fract[44]=16;
    //3
    fur_elise.notes[45]=A4; fur_elise.fract[45]=-8;
    fur_elise.notes[46]=C4; fur_elise.fract[46]=16;
    fur_elise.notes[47]=E4; fur_elise.fract[47]=16;
    fur_elise.notes[48]=A4; fur_elise.fract[48]=16;
    //4
    fur_elise.notes[49]=B4; fur_elise.fract[49]=-8;
    fur_elise.notes[50]=E4; fur_elise.fract[50]=16;
    fur_elise.notes[51]=GS4; fur_elise.fract[51]=16;
    fur_elise.notes[52]=B4; fur_elise.fract[52]=16;
    //5
    fur_elise.notes[53]=C5; fur_elise.fract[53]=8;
    fur_elise.notes[54]=REST; fur_elise.fract[54]=16;
    fur_elise.notes[55]=E4; fur_elise.fract[55]=16;
    fur_elise.notes[56]=E5; fur_elise.fract[56]=16;
    fur_elise.notes[57]=DS5; fur_elise.fract[57]=16;
    //6
    fur_elise.notes[58]=E5; fur_elise.fract[58]=16;
    fur_elise.notes[59]=DS5; fur_elise.fract[59]=16;
    fur_elise.notes[60]=E5; fur_elise.fract[60]=16;
    fur_elise.notes[61]=B4; fur_elise.fract[61]=16;
    fur_elise.notes[62]=D5; fur_elise.fract[62]=16;
    fur_elise.notes[63]=C5; fur_elise.fract[63]=16;
    //7
    fur_elise.notes[64]=A4; fur_elise.fract[64]=-8;
    fur_elise.notes[65]=C4; fur_elise.fract[65]=16;
    fur_elise.notes[66]=E4; fur_elise.fract[66]=16;
    fur_elise.notes[67]=A4; fur_elise.fract[67]=16;
    //8
    fur_elise.notes[68]=B4; fur_elise.fract[68]=-8;
    fur_elise.notes[69]=E5; fur_elise.fract[69]=16;
    fur_elise.notes[70]=C5; fur_elise.fract[70]=16;
    fur_elise.notes[71]=B4; fur_elise.fract[71]=16;
    //10
    fur_elise.notes[72]=A4; fur_elise.fract[72]=8;
    fur_elise.notes[73]=REST; fur_elise.fract[73]=16;
    fur_elise.notes[74]=B4; fur_elise.fract[74]=16;
    fur_elise.notes[75]=C5; fur_elise.fract[75]=16;
    fur_elise.notes[76]=D5; fur_elise.fract[76]=16;
    //11
    fur_elise.notes[78]=E5; fur_elise.fract[78]=-8;
    fur_elise.notes[79]=G4; fur_elise.fract[79]=16;
    fur_elise.notes[80]=F5; fur_elise.fract[80]=16;
    fur_elise.notes[81]=E5; fur_elise.fract[81]=16;
    //12
    fur_elise.notes[82]=D5; fur_elise.fract[82]=-8;
    fur_elise.notes[83]=F4; fur_elise.fract[83]=16;
    fur_elise.notes[84]=E5; fur_elise.fract[84]=16;
    fur_elise.notes[85]=D5; fur_elise.fract[85]=16;
    //13
    fur_elise.notes[86]=C5; fur_elise.fract[86]=-8;
    fur_elise.notes[87]=E4; fur_elise.fract[87]=16;
    fur_elise.notes[88]=D5; fur_elise.fract[88]=16;
    fur_elise.notes[89]=C5; fur_elise.fract[89]=16;
    //14
    fur_elise.notes[90]=B4; fur_elise.fract[90]=8;
    fur_elise.notes[91]=REST; fur_elise.fract[91]=16;
    fur_elise.notes[92]=E4; fur_elise.fract[92]=16;
    fur_elise.notes[93]=E5; fur_elise.fract[93]=16;
    fur_elise.notes[94]=REST; fur_elise.fract[94]=16;
    //15
    fur_elise.notes[95]=REST; fur_elise.fract[95]=16;
    fur_elise.notes[96]=E5; fur_elise.fract[96]=16;
    fur_elise.notes[97]=E6; fur_elise.fract[97]=16;
    fur_elise.notes[98]=REST; fur_elise.fract[98]=16;
    fur_elise.notes[99]=REST; fur_elise.fract[99]=16;
    fur_elise.notes[100]=DS5; fur_elise.fract[100]=16;
    //16
    fur_elise.notes[101]=E5; fur_elise.fract[101]=16;
    fur_elise.notes[102]=REST; fur_elise.fract[102]=16;
    fur_elise.notes[103]=REST; fur_elise.fract[103]=16;
    fur_elise.notes[104]=DS5; fur_elise.fract[104]=16;
    fur_elise.notes[105]=E5; fur_elise.fract[105]=16;
    fur_elise.notes[106]=DS5; fur_elise.fract[106]=16;
    //17
    fur_elise.notes[107]=E5; fur_elise.fract[107]=16;
    fur_elise.notes[108]=DS5; fur_elise.fract[108]=16;
    fur_elise.notes[109]=E5; fur_elise.fract[109]=16;
    fur_elise.notes[110]=B4; fur_elise.fract[110]=16;
    fur_elise.notes[111]=D5; fur_elise.fract[111]=16;
    fur_elise.notes[112]=C5; fur_elise.fract[112]=16;
    //18
    fur_elise.notes[113]=A4; fur_elise.fract[113]=8;
    fur_elise.notes[114]=REST; fur_elise.fract[114]=16;
    fur_elise.notes[115]=C4; fur_elise.fract[115]=16;
    fur_elise.notes[116]=E5; fur_elise.fract[116]=16;
    fur_elise.notes[117]=A4; fur_elise.fract[117]=16;
    //19
    fur_elise.notes[118]=B4; fur_elise.fract[118]=8;
    fur_elise.notes[119]=REST; fur_elise.fract[119]=16;
    fur_elise.notes[120]=E4; fur_elise.fract[120]=16;
    fur_elise.notes[121]=GS4; fur_elise.fract[121]=16;
    fur_elise.notes[122]=B4; fur_elise.fract[122]=16;
    //20
    fur_elise.notes[123]=C5; fur_elise.fract[123]=8;
    fur_elise.notes[124]=REST; fur_elise.fract[124]=16;
    fur_elise.notes[125]=E4; fur_elise.fract[125]=16;
    fur_elise.notes[126]=E5; fur_elise.fract[126]=16;
    fur_elise.notes[127]=DS5; fur_elise.fract[127]=16;
    //21
    fur_elise.notes[128]=E5; fur_elise.fract[128]=16;
    fur_elise.notes[129]=DS5; fur_elise.fract[129]=16;
    fur_elise.notes[130]=E5; fur_elise.fract[130]=16;
    fur_elise.notes[131]=B4; fur_elise.fract[131]=16;
    fur_elise.notes[132]=D5; fur_elise.fract[132]=16;
    fur_elise.notes[133]=C5; fur_elise.fract[133]=16;
    //22
    fur_elise.notes[134]=A4; fur_elise.fract[134]=8;
    fur_elise.notes[135]=REST; fur_elise.fract[135]=16;
    fur_elise.notes[136]=C4; fur_elise.fract[136]=16;
    fur_elise.notes[137]=E4; fur_elise.fract[137]=16;
    fur_elise.notes[138]=A4; fur_elise.fract[138]=16;
    //23
    fur_elise.notes[139]=B4; fur_elise.fract[139]=8;
    fur_elise.notes[140]=REST; fur_elise.fract[140]=16;
    fur_elise.notes[141]=E4; fur_elise.fract[141]=16;
    fur_elise.notes[142]=C5; fur_elise.fract[142]=16;
    fur_elise.notes[143]=B4; fur_elise.fract[143]=16;
    //24
    fur_elise.notes[144]=A4; fur_elise.fract[144]=8;
    fur_elise.notes[145]=REST; fur_elise.fract[145]=16;
    fur_elise.notes[146]=B4; fur_elise.fract[146]=16;
    fur_elise.notes[147]=C5; fur_elise.fract[147]=16;
    fur_elise.notes[148]=D5; fur_elise.fract[148]=16;
    //11
    fur_elise.notes[149]=E5; fur_elise.fract[149]=-8;
    fur_elise.notes[150]=G4; fur_elise.fract[150]=16;
    fur_elise.notes[151]=F5; fur_elise.fract[151]=16;
    fur_elise.notes[152]=E5; fur_elise.fract[152]=16;
    //12
    fur_elise.notes[153]=D5; fur_elise.fract[153]=-8;
    fur_elise.notes[154]=F4; fur_elise.fract[154]=16;
    fur_elise.notes[155]=E5; fur_elise.fract[155]=16;
    fur_elise.notes[156]=D5; fur_elise.fract[156]=16;
    //13
    fur_elise.notes[157]=C5; fur_elise.fract[157]=-8;
    fur_elise.notes[158]=E4; fur_elise.fract[158]=16;
    fur_elise.notes[159]=D5; fur_elise.fract[159]=16;
    fur_elise.notes[160]=C5; fur_elise.fract[160]=16;
    //14
    fur_elise.notes[161]=B4; fur_elise.fract[161]=8;
    fur_elise.notes[162]=REST; fur_elise.fract[162]=16;
    fur_elise.notes[163]=E4; fur_elise.fract[163]=16;
    fur_elise.notes[164]=E5; fur_elise.fract[164]=16;
    fur_elise.notes[164]=REST; fur_elise.fract[165]=16;
    //15
    fur_elise.notes[166]=REST; fur_elise.fract[166]=16;
    fur_elise.notes[167]=E5; fur_elise.fract[167]=16;
    fur_elise.notes[168]=E6; fur_elise.fract[168]=16;
    fur_elise.notes[169]=REST; fur_elise.fract[169]=16;
    fur_elise.notes[170]=REST; fur_elise.fract[170]=16;
    fur_elise.notes[171]=DS5; fur_elise.fract[171]=16;
    //16
    fur_elise.notes[172]=E5; fur_elise.fract[172]=16;
    fur_elise.notes[173]=REST; fur_elise.fract[173]=16;
    fur_elise.notes[174]=REST; fur_elise.fract[174]=16;
    fur_elise.notes[175]=DS5; fur_elise.fract[175]=16;
    fur_elise.notes[176]=E5; fur_elise.fract[176]=16;
    fur_elise.notes[177]=DS5; fur_elise.fract[177]=16;
    //17
    fur_elise.notes[178]=E5; fur_elise.fract[178]=16;
    fur_elise.notes[179]=DS5; fur_elise.fract[179]=16;
    fur_elise.notes[180]=E5; fur_elise.fract[180]=16;
    fur_elise.notes[181]=B4; fur_elise.fract[181]=16;
    fur_elise.notes[182]=D5; fur_elise.fract[182]=16;
    fur_elise.notes[183]=C5; fur_elise.fract[183]=16;
    //18
    fur_elise.notes[184]=A4; fur_elise.fract[184]=8;
    fur_elise.notes[185]=REST; fur_elise.fract[185]=16;
    fur_elise.notes[186]=C4; fur_elise.fract[186]=16;
    fur_elise.notes[187]=E5; fur_elise.fract[187]=16;
    fur_elise.notes[188]=A4; fur_elise.fract[188]=16;
    //19
    fur_elise.notes[189]=B4; fur_elise.fract[189]=8;
    fur_elise.notes[190]=REST; fur_elise.fract[190]=16;
    fur_elise.notes[191]=E4; fur_elise.fract[191]=16;
    fur_elise.notes[192]=GS4; fur_elise.fract[192]=16;
    fur_elise.notes[193]=B4; fur_elise.fract[193]=16;
    //20
    fur_elise.notes[194]=C5; fur_elise.fract[194]=8;
    fur_elise.notes[195]=REST; fur_elise.fract[195]=16;
    fur_elise.notes[196]=E4; fur_elise.fract[196]=16;
    fur_elise.notes[197]=E5; fur_elise.fract[197]=16;
    fur_elise.notes[198]=DS5; fur_elise.fract[198]=16;
    //21
    fur_elise.notes[199]=E5; fur_elise.fract[199]=16;
    fur_elise.notes[200]=DS5; fur_elise.fract[200]=16;
    fur_elise.notes[201]=E5; fur_elise.fract[201]=16;
    fur_elise.notes[202]=B4; fur_elise.fract[202]=16;
    fur_elise.notes[203]=D5; fur_elise.fract[203]=16;
    fur_elise.notes[204]=C5; fur_elise.fract[204]=16;
    //22
    fur_elise.notes[205]=A4; fur_elise.fract[205]=8;
    fur_elise.notes[206]=REST; fur_elise.fract[206]=16;
    fur_elise.notes[207]=C4; fur_elise.fract[207]=16;
    fur_elise.notes[208]=E4; fur_elise.fract[208]=16;
    fur_elise.notes[209]=A4; fur_elise.fract[209]=16;
    //23
    fur_elise.notes[210]=B4; fur_elise.fract[210]=8;
    fur_elise.notes[211]=REST; fur_elise.fract[211]=16;
    fur_elise.notes[212]=E4; fur_elise.fract[212]=16;
    fur_elise.notes[213]=C5; fur_elise.fract[213]=16;
    fur_elise.notes[214]=B4; fur_elise.fract[214]=16;
    //25
    fur_elise.notes[215]=A4; fur_elise.fract[215]=8;
    fur_elise.notes[216]=REST; fur_elise.fract[216]=16;
    fur_elise.notes[217]=C5; fur_elise.fract[217]=16;
    fur_elise.notes[218]=C5; fur_elise.fract[218]=16;
    fur_elise.notes[219]=C5; fur_elise.fract[219]=16;
    //26
    fur_elise.notes[220]=C5; fur_elise.fract[220]=4;
    fur_elise.notes[221]=F5; fur_elise.fract[221]=-16;
    fur_elise.notes[222]=E5; fur_elise.fract[222]=32;
    //27
    fur_elise.notes[223]=E5; fur_elise.fract[223]=8;
    fur_elise.notes[224]=D5; fur_elise.fract[224]=8;
    fur_elise.notes[225]=AS5; fur_elise.fract[225]=-16;
    fur_elise.notes[226]=A5; fur_elise.fract[226]=32;
    //28
    fur_elise.notes[227]=A4; fur_elise.fract[227]=16;
    fur_elise.notes[228]=G5; fur_elise.fract[228]=16;
    fur_elise.notes[229]=F5; fur_elise.fract[229]=16;
    fur_elise.notes[230]=E5; fur_elise.fract[230]=16;
    fur_elise.notes[231]=D5; fur_elise.fract[231]=16;
    fur_elise.notes[232]=C5; fur_elise.fract[232]=16;
    //29
    fur_elise.notes[233]=AS4; fur_elise.fract[233]=8;
    fur_elise.notes[234]=A4; fur_elise.fract[234]=8;
    fur_elise.notes[235]=A4; fur_elise.fract[235]=32;
    fur_elise.notes[236]=G4; fur_elise.fract[236]=32;
    fur_elise.notes[237]=A4; fur_elise.fract[237]=32;
    fur_elise.notes[238]=B4; fur_elise.fract[238]=32;
    //30
    fur_elise.notes[239]=C5; fur_elise.fract[239]=4;
    fur_elise.notes[240]=D5; fur_elise.fract[240]=16;
    fur_elise.notes[241]=DS5; fur_elise.fract[241]=16;
    //31
    fur_elise.notes[242]=E5; fur_elise.fract[242]=-8;
    fur_elise.notes[243]=E5; fur_elise.fract[243]=16;
    fur_elise.notes[244]=F5; fur_elise.fract[244]=16;
    fur_elise.notes[245]=A4; fur_elise.fract[245]=16;
    //32
    fur_elise.notes[246]=C5; fur_elise.fract[246]=4;
    fur_elise.notes[247]=D5; fur_elise.fract[247]=-16;
    fur_elise.notes[248]=B4; fur_elise.fract[248]=32;
    //33
    fur_elise.notes[249]=C5; fur_elise.fract[259]=32;
    fur_elise.notes[250]=G5; fur_elise.fract[250]=32;
    fur_elise.notes[251]=G4; fur_elise.fract[251]=32;
    fur_elise.notes[252]=G5; fur_elise.fract[252]=32;
    fur_elise.notes[253]=A4; fur_elise.fract[253]=32;
    fur_elise.notes[254]=G5; fur_elise.fract[254]=32;
    fur_elise.notes[255]=B4; fur_elise.fract[255]=32;
    fur_elise.notes[256]=G5; fur_elise.fract[256]=32;
    fur_elise.notes[257]=C5; fur_elise.fract[257]=32;
    fur_elise.notes[258]=G5; fur_elise.fract[258]=32;
    fur_elise.notes[259]=D5; fur_elise.fract[259]=32;
    fur_elise.notes[260]=G5; fur_elise.fract[260]=32;
    //34
    fur_elise.notes[261]=E5; fur_elise.fract[261]=32;
    fur_elise.notes[262]=G5; fur_elise.fract[262]=32;
    fur_elise.notes[263]=C6; fur_elise.fract[263]=32;
    fur_elise.notes[264]=B5; fur_elise.fract[264]=32;
    fur_elise.notes[265]=A5; fur_elise.fract[265]=32;
    fur_elise.notes[266]=G5; fur_elise.fract[266]=32;
    fur_elise.notes[267]=F5; fur_elise.fract[267]=32;
    fur_elise.notes[268]=E5; fur_elise.fract[268]=32;
    fur_elise.notes[269]=D5; fur_elise.fract[269]=32;
    fur_elise.notes[270]=G5; fur_elise.fract[270]=32;
    fur_elise.notes[271]=F5; fur_elise.fract[271]=32;
    fur_elise.notes[272]=D5; fur_elise.fract[272]=32;
    //35
    fur_elise.notes[273]=C5; fur_elise.fract[273]=32;
    fur_elise.notes[274]=G5; fur_elise.fract[274]=32;
    fur_elise.notes[275]=G4; fur_elise.fract[275]=32;
    fur_elise.notes[276]=G5; fur_elise.fract[276]=32;
    fur_elise.notes[277]=A4; fur_elise.fract[277]=32;
    fur_elise.notes[278]=G5; fur_elise.fract[278]=32;
    fur_elise.notes[279]=B4; fur_elise.fract[279]=32;
    fur_elise.notes[280]=G5; fur_elise.fract[280]=32;
    fur_elise.notes[281]=C5; fur_elise.fract[281]=32;
    fur_elise.notes[282]=G5; fur_elise.fract[282]=32;
    fur_elise.notes[283]=D5; fur_elise.fract[283]=32;
    fur_elise.notes[284]=G5; fur_elise.fract[284]=32;
    //36
    fur_elise.notes[285]=E5; fur_elise.fract[285]=32;
    fur_elise.notes[286]=G5; fur_elise.fract[286]=32;
    fur_elise.notes[287]=C6; fur_elise.fract[287]=32;
    fur_elise.notes[288]=B5; fur_elise.fract[288]=32;
    fur_elise.notes[289]=A5; fur_elise.fract[289]=32;
    fur_elise.notes[290]=G5; fur_elise.fract[290]=32;
    fur_elise.notes[291]=F5; fur_elise.fract[291]=32;
    fur_elise.notes[292]=E5; fur_elise.fract[292]=32;
    fur_elise.notes[293]=D5; fur_elise.fract[293]=32;
    fur_elise.notes[294]=G5; fur_elise.fract[294]=32;
    fur_elise.notes[295]=F5; fur_elise.fract[295]=32;
    fur_elise.notes[296]=D5; fur_elise.fract[296]=32;
    //37
    fur_elise.notes[297]=E5; fur_elise.fract[297]=32;
    fur_elise.notes[298]=F5; fur_elise.fract[298]=32;
    fur_elise.notes[299]=E5; fur_elise.fract[299]=32;
    fur_elise.notes[300]=DS5; fur_elise.fract[300]=32;
    fur_elise.notes[301]=E5; fur_elise.fract[301]=32;
    fur_elise.notes[302]=B4; fur_elise.fract[302]=32;
    fur_elise.notes[303]=E5; fur_elise.fract[303]=32;
    fur_elise.notes[304]=DS5; fur_elise.fract[304]=32;
    fur_elise.notes[305]=E5; fur_elise.fract[305]=32;
    fur_elise.notes[306]=B4; fur_elise.fract[306]=32;
    fur_elise.notes[307]=E5; fur_elise.fract[307]=32;
    fur_elise.notes[308]=DS5; fur_elise.fract[308]=32;
    //38
    fur_elise.notes[309]=E5; fur_elise.fract[309]=-8;
    fur_elise.notes[310]=B4; fur_elise.fract[310]=16;
    fur_elise.notes[311]=E5; fur_elise.fract[311]=16;
    fur_elise.notes[312]=DS5; fur_elise.fract[312]=16;
    //39
    fur_elise.notes[313]=E5; fur_elise.fract[313]=-8;
    fur_elise.notes[314]=B4; fur_elise.fract[314]=16;
    fur_elise.notes[315]=E5; fur_elise.fract[315]=16;
    fur_elise.notes[316]=REST; fur_elise.fract[316]=16;
    //40
    fur_elise.notes[317]=REST; fur_elise.fract[317]=16;
    fur_elise.notes[318]=DS5; fur_elise.fract[318]=16;
    fur_elise.notes[319]=E5; fur_elise.fract[319]=16;
    fur_elise.notes[320]=REST; fur_elise.fract[320]=16;
    fur_elise.notes[321]=REST; fur_elise.fract[321]=16;
    fur_elise.notes[322]=DS5; fur_elise.fract[322]=16;
    //41
    fur_elise.notes[323]=E5; fur_elise.fract[323]=16;
    fur_elise.notes[324]=DS5; fur_elise.fract[324]=16;
    fur_elise.notes[325]=E5; fur_elise.fract[325]=16;
    fur_elise.notes[326]=B4; fur_elise.fract[326]=16;
    fur_elise.notes[327]=D5; fur_elise.fract[327]=16;
    fur_elise.notes[328]=C5; fur_elise.fract[328]=16;
    //42
    fur_elise.notes[329]=A4; fur_elise.fract[329]=8;
    fur_elise.notes[330]=REST; fur_elise.fract[330]=16;
    fur_elise.notes[331]=C4; fur_elise.fract[331]=16;
    fur_elise.notes[332]=E4; fur_elise.fract[332]=16;
    fur_elise.notes[333]=A4; fur_elise.fract[333]=16;
    //43
    fur_elise.notes[334]=B4; fur_elise.fract[334]=8;
    fur_elise.notes[335]=REST; fur_elise.fract[335]=16;
    fur_elise.notes[336]=E4; fur_elise.fract[336]=16;
    fur_elise.notes[337]=GS4; fur_elise.fract[337]=16;
    fur_elise.notes[338]=B4; fur_elise.fract[338]=16;
    //44
    fur_elise.notes[339]=C5; fur_elise.fract[339]=8;
    fur_elise.notes[340]=REST; fur_elise.fract[340]=16;
    fur_elise.notes[341]=E4; fur_elise.fract[341]=16;
    fur_elise.notes[342]=E5; fur_elise.fract[342]=16;
    fur_elise.notes[343]=DS5; fur_elise.fract[343]=16;
    //45
    fur_elise.notes[344]=E5; fur_elise.fract[344]=16;
    fur_elise.notes[345]=DS5; fur_elise.fract[345]=16;
    fur_elise.notes[346]=E5; fur_elise.fract[346]=16;
    fur_elise.notes[347]=B4; fur_elise.fract[347]=16;
    fur_elise.notes[348]=D5; fur_elise.fract[348]=16;
    fur_elise.notes[349]=C5; fur_elise.fract[349]=16;
    //46
    fur_elise.notes[350]=A4; fur_elise.fract[350]=8;
    fur_elise.notes[351]=REST; fur_elise.fract[351]=16;
    fur_elise.notes[352]=C4; fur_elise.fract[352]=16;
    fur_elise.notes[353]=E4; fur_elise.fract[353]=16;
    fur_elise.notes[354]=A4; fur_elise.fract[354]=16;
    //47
    fur_elise.notes[355]=B4; fur_elise.fract[355]=8;
    fur_elise.notes[356]=REST; fur_elise.fract[356]=16;
    fur_elise.notes[357]=E4; fur_elise.fract[357]=16;
    fur_elise.notes[358]=C5; fur_elise.fract[358]=16;
    fur_elise.notes[359]=B4; fur_elise.fract[359]=16;
    //48
    fur_elise.notes[360]=A4; fur_elise.fract[360]=8;
    fur_elise.notes[361]=REST; fur_elise.fract[361]=16;
    fur_elise.notes[362]=B4; fur_elise.fract[362]=16;
    fur_elise.notes[363]=C5; fur_elise.fract[363]=16;
    fur_elise.notes[364]=D5; fur_elise.fract[364]=16;
    //49
    fur_elise.notes[365]=E5; fur_elise.fract[365]=-8;
    fur_elise.notes[366]=G4; fur_elise.fract[366]=16;
    fur_elise.notes[367]=F5; fur_elise.fract[367]=16;
    fur_elise.notes[368]=E5; fur_elise.fract[368]=16;
    //50
    fur_elise.notes[369]=D5; fur_elise.fract[369]=-8;
    fur_elise.notes[370]=F4; fur_elise.fract[370]=16;
    fur_elise.notes[371]=E5; fur_elise.fract[371]=16;
    fur_elise.notes[372]=D5; fur_elise.fract[372]=16;
    //51
    fur_elise.notes[373]=C5; fur_elise.fract[373]=-8;
    fur_elise.notes[374]=E4; fur_elise.fract[374]=16;
    fur_elise.notes[375]=D5; fur_elise.fract[375]=16;
    fur_elise.notes[376]=C5; fur_elise.fract[376]=16;
    //52
    fur_elise.notes[377]=B4; fur_elise.fract[377]=8;
    fur_elise.notes[378]=REST; fur_elise.fract[378]=16;
    fur_elise.notes[379]=E4; fur_elise.fract[379]=16;
    fur_elise.notes[380]=E5; fur_elise.fract[380]=16;
    fur_elise.notes[381]=REST; fur_elise.fract[381]=16;
    //53
    fur_elise.notes[382]=REST; fur_elise.fract[382]=16;
    fur_elise.notes[383]=E5; fur_elise.fract[383]=16;
    fur_elise.notes[384]=E6; fur_elise.fract[384]=16;
    fur_elise.notes[385]=REST; fur_elise.fract[385]=16;
    fur_elise.notes[386]=REST; fur_elise.fract[386]=16;
    fur_elise.notes[387]=DS5; fur_elise.fract[387]=16;
    //54
    fur_elise.notes[388]=E5; fur_elise.fract[388]=16;
    fur_elise.notes[389]=REST; fur_elise.fract[389]=16;
    fur_elise.notes[390]=REST; fur_elise.fract[390]=16;
    fur_elise.notes[391]=DS5; fur_elise.fract[391]=16;
    fur_elise.notes[392]=E5; fur_elise.fract[392]=16;
    fur_elise.notes[393]=D5; fur_elise.fract[393]=16;
    //55
    fur_elise.notes[394]=E5; fur_elise.fract[394]=16;
    fur_elise.notes[395]=DS5; fur_elise.fract[395]=16;
    fur_elise.notes[396]=E5; fur_elise.fract[396]=16;
    fur_elise.notes[397]=B4; fur_elise.fract[397]=16;
    fur_elise.notes[398]=D5; fur_elise.fract[398]=16;
    fur_elise.notes[399]=C5; fur_elise.fract[399]=16;
    //56
    fur_elise.notes[400]=A4; fur_elise.fract[400]=8;
    fur_elise.notes[401]=REST; fur_elise.fract[401]=16;
    fur_elise.notes[402]=C4; fur_elise.fract[402]=16;
    fur_elise.notes[403]=E4; fur_elise.fract[403]=16;
    fur_elise.notes[404]=A4; fur_elise.fract[404]=16;
    //57
    fur_elise.notes[405]=B4; fur_elise.fract[405]=8;
    fur_elise.notes[406]=REST; fur_elise.fract[406]=16;
    fur_elise.notes[407]=E4; fur_elise.fract[407]=16;
    fur_elise.notes[408]=GS4; fur_elise.fract[408]=16;
    fur_elise.notes[409]=B4; fur_elise.fract[409]=16;
    //58
    fur_elise.notes[410]=C5; fur_elise.fract[410]=8;
    fur_elise.notes[411]=REST; fur_elise.fract[411]=16;
    fur_elise.notes[412]=E4; fur_elise.fract[412]=16;
    fur_elise.notes[413]=E5; fur_elise.fract[413]=16;
    fur_elise.notes[414]=DS5; fur_elise.fract[414]=16;
    //59
    fur_elise.notes[415]=E5; fur_elise.fract[415]=16;
    fur_elise.notes[416]=DS5; fur_elise.fract[416]=16;
    fur_elise.notes[417]=E5; fur_elise.fract[417]=16;
    fur_elise.notes[418]=B4; fur_elise.fract[418]=16;
    fur_elise.notes[419]=D5; fur_elise.fract[419]=16;
    fur_elise.notes[420]=C5; fur_elise.fract[420]=16;
    //60
    fur_elise.notes[421]=A4; fur_elise.fract[421]=8;
    fur_elise.notes[422]=REST; fur_elise.fract[422]=16;
    fur_elise.notes[423]=C4; fur_elise.fract[423]=16;
    fur_elise.notes[424]=E4; fur_elise.fract[424]=16;
    fur_elise.notes[425]=A4; fur_elise.fract[425]=16;
    //61
    fur_elise.notes[426]=B4; fur_elise.fract[426]=8;
    fur_elise.notes[427]=REST; fur_elise.fract[427]=16;
    fur_elise.notes[428]=E4; fur_elise.fract[428]=16;
    fur_elise.notes[429]=C5; fur_elise.fract[429]=16;
    fur_elise.notes[430]=B4; fur_elise.fract[430]=16;
    //62
    fur_elise.notes[431]=A4; fur_elise.fract[431]=8;
    fur_elise.notes[432]=REST; fur_elise.fract[432]=16;
    fur_elise.notes[433]=REST; fur_elise.fract[433]=16;
    fur_elise.notes[434]=REST; fur_elise.fract[434]=8;
    //63
    fur_elise.notes[435]=CS5; fur_elise.fract[435]=-4;
    //64
    fur_elise.notes[436]=D5; fur_elise.fract[436]=4;
    fur_elise.notes[437]=E5; fur_elise.fract[437]=16;
    fur_elise.notes[438]=F5; fur_elise.fract[438]=16;
    //65
    fur_elise.notes[439]=F5; fur_elise.fract[439]=4;
    fur_elise.notes[440]=F5; fur_elise.fract[440]=8;
    //66
    fur_elise.notes[441]=E5; fur_elise.fract[441]=-4;
    //67
    fur_elise.notes[442]=D4; fur_elise.fract[442]=4;
    fur_elise.notes[443]=C5; fur_elise.fract[443]=16;
    fur_elise.notes[444]=B4; fur_elise.fract[444]=16;
    //68
    fur_elise.notes[445]=A4; fur_elise.fract[445]=4;
    fur_elise.notes[446]=A4; fur_elise.fract[446]=8;
    //69
    fur_elise.notes[447]=A4; fur_elise.fract[447]=8;
    fur_elise.notes[448]=C5; fur_elise.fract[448]=8;
    fur_elise.notes[449]=B4; fur_elise.fract[449]=8;
    //70
    fur_elise.notes[450]=A4; fur_elise.fract[450]=-4;
    //71
    fur_elise.notes[451]=CS5; fur_elise.fract[451]=-4;
    //72
    fur_elise.notes[452]=D5; fur_elise.fract[452]=4;
    fur_elise.notes[453]=E5; fur_elise.fract[453]=16;
    fur_elise.notes[454]=F5; fur_elise.fract[454]=16;
    //73
    fur_elise.notes[455]=F5; fur_elise.fract[455]=4;
    fur_elise.notes[456]=F5; fur_elise.fract[456]=8;
    //74
    fur_elise.notes[457]=F5; fur_elise.fract[457]=-4;
    //75
    fur_elise.notes[458]=DS5; fur_elise.fract[458]=4;
    fur_elise.notes[459]=D5; fur_elise.fract[459]=16;
    fur_elise.notes[460]=C5; fur_elise.fract[460]=16;
    //76
    fur_elise.notes[461]=AS4; fur_elise.fract[461]=4;
    fur_elise.notes[462]=A4; fur_elise.fract[462]=8;
    //77
    fur_elise.notes[463]=GS4; fur_elise.fract[463]=4;
    fur_elise.notes[464]=G4; fur_elise.fract[464]=8;
    //78
    fur_elise.notes[465]=A4; fur_elise.fract[465]=-4;
    //79
    fur_elise.notes[466]=B4; fur_elise.fract[466]=4;
    fur_elise.notes[467]=REST; fur_elise.fract[467]=8;
    //80
    fur_elise.notes[468]=A3; fur_elise.fract[468]=-32;
    fur_elise.notes[469]=C4; fur_elise.fract[469]=-32;
    fur_elise.notes[470]=E4; fur_elise.fract[470]=-32;
    fur_elise.notes[471]=A4; fur_elise.fract[471]=-32;
    fur_elise.notes[472]=C5; fur_elise.fract[472]=-32;
    fur_elise.notes[473]=E5; fur_elise.fract[473]=-32;
    fur_elise.notes[474]=D5; fur_elise.fract[474]=-32;
    fur_elise.notes[475]=C5; fur_elise.fract[475]=-32;
    fur_elise.notes[476]=B4; fur_elise.fract[476]=-32;
    //81
    fur_elise.notes[477]=A4; fur_elise.fract[477]=-32;
    fur_elise.notes[478]=C5; fur_elise.fract[478]=-32;
    fur_elise.notes[479]=E5; fur_elise.fract[479]=-32;
    fur_elise.notes[480]=A5; fur_elise.fract[480]=-32;
    fur_elise.notes[481]=C6; fur_elise.fract[481]=-32;
    fur_elise.notes[482]=E6; fur_elise.fract[482]=-32;
    fur_elise.notes[483]=D6; fur_elise.fract[483]=-32;
    fur_elise.notes[484]=C6; fur_elise.fract[484]=-32;
    fur_elise.notes[485]=B5; fur_elise.fract[485]=-32;
    //82
    fur_elise.notes[486]=A4; fur_elise.fract[486]=-32;
    fur_elise.notes[487]=C5; fur_elise.fract[487]=-32;
    fur_elise.notes[488]=E5; fur_elise.fract[488]=-32;
    fur_elise.notes[489]=A5; fur_elise.fract[489]=-32;
    fur_elise.notes[490]=C6; fur_elise.fract[490]=-32;
    fur_elise.notes[491]=E6; fur_elise.fract[491]=-32;
    fur_elise.notes[492]=D6; fur_elise.fract[492]=-32;
    fur_elise.notes[493]=C6; fur_elise.fract[493]=-32;
    fur_elise.notes[494]=B5; fur_elise.fract[494]=-32;
    //83
    fur_elise.notes[495]=AS5; fur_elise.fract[495]=-32;
    fur_elise.notes[496]=C5; fur_elise.fract[496]=-32;
    fur_elise.notes[497]=GS5; fur_elise.fract[497]=-32;
    fur_elise.notes[498]=G5; fur_elise.fract[498]=-32;
    fur_elise.notes[499]=FS5; fur_elise.fract[499]=-32;
    fur_elise.notes[500]=F5; fur_elise.fract[500]=-32;
    fur_elise.notes[501]=E5; fur_elise.fract[501]=-32;
    fur_elise.notes[502]=DS5; fur_elise.fract[502]=-32;
    fur_elise.notes[503]=D5; fur_elise.fract[503]=-32;
    //84
    fur_elise.notes[504]=CS5; fur_elise.fract[504]=-32;
    fur_elise.notes[505]=C5; fur_elise.fract[505]=-32;
    fur_elise.notes[506]=B4; fur_elise.fract[506]=-32;
    fur_elise.notes[507]=AS4; fur_elise.fract[507]=-32;
    fur_elise.notes[508]=A4; fur_elise.fract[508]=-32;
    fur_elise.notes[509]=GS4; fur_elise.fract[509]=-32;
    fur_elise.notes[510]=G4; fur_elise.fract[510]=-32;
    fur_elise.notes[511]=FS4; fur_elise.fract[511]=-32;
    fur_elise.notes[512]=F4; fur_elise.fract[512]=-32;
    //85
    fur_elise.notes[513]=E4; fur_elise.fract[513]=16;
    fur_elise.notes[514]=DS5; fur_elise.fract[514]=16;
    fur_elise.notes[515]=E5; fur_elise.fract[515]=16;
    fur_elise.notes[516]=B4; fur_elise.fract[516]=16;
    fur_elise.notes[517]=D5; fur_elise.fract[517]=16;
    fur_elise.notes[518]=C5; fur_elise.fract[518]=16;
    //86
    fur_elise.notes[519]=A4; fur_elise.fract[519]=-8;
    fur_elise.notes[520]=C4; fur_elise.fract[520]=16;
    fur_elise.notes[521]=E4; fur_elise.fract[521]=16;
    fur_elise.notes[522]=A4; fur_elise.fract[522]=16;
    //87
    fur_elise.notes[523]=B4; fur_elise.fract[523]=-8;
    fur_elise.notes[524]=E4; fur_elise.fract[524]=16;
    fur_elise.notes[525]=GS4; fur_elise.fract[525]=16;
    fur_elise.notes[526]=B4; fur_elise.fract[526]=16;
    //88
    fur_elise.notes[527]=C5; fur_elise.fract[527]=8;
    fur_elise.notes[528]=REST; fur_elise.fract[528]=16;
    fur_elise.notes[529]=E4; fur_elise.fract[529]=16;
    fur_elise.notes[530]=E5; fur_elise.fract[530]=16;
    fur_elise.notes[531]=DS5; fur_elise.fract[531]=16;
    //89
    fur_elise.notes[532]=E5; fur_elise.fract[532]=16;
    fur_elise.notes[533]=DS5; fur_elise.fract[533]=16;
    fur_elise.notes[534]=E5; fur_elise.fract[534]=16;
    fur_elise.notes[535]=B4; fur_elise.fract[535]=16;
    fur_elise.notes[536]=D5; fur_elise.fract[536]=16;
    fur_elise.notes[537]=C5; fur_elise.fract[537]=16;
    //90
    fur_elise.notes[538]=A4; fur_elise.fract[538]=-8;
    fur_elise.notes[539]=C4; fur_elise.fract[539]=16;
    fur_elise.notes[540]=E4; fur_elise.fract[540]=16;
    fur_elise.notes[541]=A4; fur_elise.fract[541]=16;
    //91
    fur_elise.notes[542]=B4; fur_elise.fract[542]=-8;
    fur_elise.notes[543]=E4; fur_elise.fract[543]=16;
    fur_elise.notes[544]=C5; fur_elise.fract[544]=16;
    fur_elise.notes[545]=B4; fur_elise.fract[545]=16;
    //92
    fur_elise.notes[546]=A4; fur_elise.fract[546]=-8;
    fur_elise.notes[547]=REST; fur_elise.fract[547]=-8;
    //93
    fur_elise.notes[548]=REST; fur_elise.fract[548]=-8;
    fur_elise.notes[549]=G4; fur_elise.fract[549]=16;
    fur_elise.notes[550]=F5; fur_elise.fract[550]=16;
    fur_elise.notes[551]=E5; fur_elise.fract[551]=16;
    //94
    fur_elise.notes[552]=D5; fur_elise.fract[552]=4;
    fur_elise.notes[553]=REST; fur_elise.fract[553]=8;
    //95
    fur_elise.notes[554]=REST; fur_elise.fract[554]=-8;
    fur_elise.notes[555]=E4; fur_elise.fract[555]=16;
    fur_elise.notes[556]=D5; fur_elise.fract[556]=16;
    fur_elise.notes[557]=C5; fur_elise.fract[557]=16;
    //96
    fur_elise.notes[558]=B4; fur_elise.fract[558]=-8;
    fur_elise.notes[559]=E4; fur_elise.fract[559]=16;
    fur_elise.notes[560]=E5; fur_elise.fract[560]=8;
    //97
    fur_elise.notes[561]=E5; fur_elise.fract[561]=8;
    fur_elise.notes[562]=E6; fur_elise.fract[562]=-8;
    fur_elise.notes[563]=DS5; fur_elise.fract[563]=16;
    //98
    fur_elise.notes[564]=E5; fur_elise.fract[564]=16;
    fur_elise.notes[565]=REST; fur_elise.fract[565]=16;
    fur_elise.notes[566]=REST; fur_elise.fract[566]=16;
    fur_elise.notes[567]=DS5; fur_elise.fract[567]=16;
    fur_elise.notes[568]=E5; fur_elise.fract[568]=16;
    fur_elise.notes[569]=DS5; fur_elise.fract[569]=16;
    //99
    fur_elise.notes[570]=E5; fur_elise.fract[570]=16;
    fur_elise.notes[571]=DS5; fur_elise.fract[571]=16;
    fur_elise.notes[572]=E5; fur_elise.fract[572]=16;
    fur_elise.notes[573]=B4; fur_elise.fract[573]=16;
    fur_elise.notes[574]=D5; fur_elise.fract[574]=16;
    fur_elise.notes[575]=C5; fur_elise.fract[575]=16;
    //100
    fur_elise.notes[576]=A4; fur_elise.fract[576]=-8;
    fur_elise.notes[577]=C4; fur_elise.fract[577]=16;
    fur_elise.notes[578]=E4; fur_elise.fract[578]=16;
    fur_elise.notes[579]=A4; fur_elise.fract[579]=16;
    //101
    fur_elise.notes[580]=B4; fur_elise.fract[580]=-8;
    fur_elise.notes[581]=E4; fur_elise.fract[581]=16;
    fur_elise.notes[582]=GS4; fur_elise.fract[582]=16;
    fur_elise.notes[583]=B4; fur_elise.fract[583]=16;
    //102
    fur_elise.notes[584]=C5; fur_elise.fract[584]=8;
    fur_elise.notes[585]=REST; fur_elise.fract[585]=16;
    fur_elise.notes[586]=E4; fur_elise.fract[586]=16;
    fur_elise.notes[587]=E5; fur_elise.fract[587]=16;
    fur_elise.notes[588]=DS5; fur_elise.fract[588]=16;
    //103
    fur_elise.notes[589]=E5; fur_elise.fract[589]=16;
    fur_elise.notes[590]=DS5; fur_elise.fract[590]=16;
    fur_elise.notes[591]=E5; fur_elise.fract[591]=16;
    fur_elise.notes[592]=B4; fur_elise.fract[592]=16;
    fur_elise.notes[593]=D5; fur_elise.fract[593]=16;
    fur_elise.notes[594]=C5; fur_elise.fract[594]=16;
    //104
    fur_elise.notes[595]=A4; fur_elise.fract[595]=-8;
    fur_elise.notes[596]=C4; fur_elise.fract[596]=16;
    fur_elise.notes[597]=E4; fur_elise.fract[597]=16;
    fur_elise.notes[598]=A4; fur_elise.fract[598]=16;
    //105
    fur_elise.notes[599]=B4; fur_elise.fract[599]=-8;
    fur_elise.notes[600]=E4; fur_elise.fract[600]=16;
    fur_elise.notes[601]=C5; fur_elise.fract[601]=16;
    fur_elise.notes[602]=B4; fur_elise.fract[602]=16;
    //106
    fur_elise.notes[603]=A4; fur_elise.fract[603]=-4;

    fur_elise.nr_notes=604;
    fur_elise.tempo=80;
    play_song(fur_elise);
}
// TODO NOKIA
void nokia_start()
{
    struct song nokia;
    nokia.notes[0]=E5; nokia.fract[0]=8;
    nokia.notes[1]=D5; nokia.fract[1]=8;
    nokia.notes[2]=FS4; nokia.fract[2]=4;
    nokia.notes[3]=GS4; nokia.fract[3]=4;
    nokia.notes[4]=CS5; nokia.fract[4]=8;
    nokia.notes[5]=B4; nokia.fract[5]=8;
    nokia.notes[6]=D4; nokia.fract[6]=4;
    nokia.notes[7]=E4; nokia.fract[7]=4;
    nokia.notes[8]=B4; nokia.fract[8]=8;
    nokia.notes[9]=A4; nokia.fract[9]=8;
    nokia.notes[10]=CS4; nokia.fract[10]=4;
    nokia.notes[11]=E4; nokia.fract[11]=4;
    nokia.notes[12]=A4; nokia.fract[12]=2;
    nokia.tempo=180;
    nokia.nr_notes=13;
    play_song(nokia);
}

// FIXME
// TODO https://github.com/robsoncouto/arduino-songs/blob/master/happybirthday/happybirthday.ino
///////////////////////////////////////////////////////////////

void play_song(song m)
{
    float dur;
    int wholenote=(60000*4)/m.tempo;
    for (int i=0; i<m.nr_notes; i++)
    {
        if (m.fract[i]>0)
            dur=(float)wholenote/m.fract[i];
        else 
        {
            dur=(float)wholenote/abs(m.fract[i]);
            dur*=1.5;
        }
        tone(buzzer_pin, m.notes[i], dur*0.9);
        delay(dur);
        noTone(buzzer_pin);
    }
}
