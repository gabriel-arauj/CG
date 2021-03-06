#include "../Headers/parser.h"

bool parser (const char * path, std::vector < Objeto> &out_objects){

	int size = out_objects.size();
	std::vector<Vertice> temp_vertices;

	FILE * file = fopen(path, "r");
	if( file == NULL ){
    	printf("Impossivel abrir arquivo!\n");
    	return false;
	}
	while(true){
		char linha_lida[128], nome_do_objeto[30];
		int res = fscanf(file, "%s", linha_lida); 
		if(res == EOF)
			break; 
		if(strcmp(linha_lida, "o") == 0){
			fscanf(file, "%s", nome_do_objeto);
			Objeto obj(nome_do_objeto);
			size ++;
			out_objects.push_back(obj);
			temp_vertices.clear();
		}else if(strcmp(linha_lida, "v") == 0){
			float x, y, z;
			fscanf(file, "%f %f %f\n", &x, &y, &z );
			Vertice v(x,y,z);
			temp_vertices.push_back(v);
		}else if(strcmp(linha_lida, "f") == 0){
			int v1, v2, v3, aux;
			int matches = fscanf(file, "%d//%d %d//%d %d//%d\n", &v1, &aux, &v2, &aux, &v3, &aux);
			Vertice ve1 = temp_vertices[v1 - 1];
			Vertice ve2 = temp_vertices[v2 - 1];
			Vertice ve3 = temp_vertices[v3 - 1];
			Forma *f = new Face(ve1,ve2,ve3);
			out_objects[size-1].addForma(f);
			if(matches != 6){
				return false;
			}
		}
	}
	return true;
}
