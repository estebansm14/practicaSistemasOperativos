
unsigned int memg[];

memg = new unsigned int[15];
unsigned int litnum[] = new int[];
unsigned int base_litnum = (memg[1] & 0xFFFF0000) >>16;
unsigned int pag_litnum = memg[1] & 0x0000FFFF;
int litnum[] = new int[pag_litnum];
unsigned int based_litstr = (memg[2] & 0xFFFF0000)>>16;
unsigned int pag_litstr = memg[2] & 0x0000FFFF;
char litstr[] = new char[pag_litstr];

unsigned int litstr[] = new unsigned int[pag_litstr];

char letra1 = (litstr[0] & 0xFF000000)>>24;
char letra2 = (litstr[0] & 0x00FF0000)>>16;
char letra3 = (litstr[0] & 0x0000FF00)>>8;
char letra4 = (litstr[0] & 0x000000FF);

le_inicio = (memg[6] & 0xFFFF0000)>>16;
le_fin = (memg[6] & 0x0000FFFF);

for(int x = le_inicio; x =< le_inicio; x++){
  if(memg[le_inicio] & 0x8000 != 0){
    seg = datanum;
  }else{
    seg = datastr;
  }
  dir = (memg[le_inicio] & 0x7FFF);
} 
