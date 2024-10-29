#include<stdio.h>
#include<stdlib.h>
#include <cjson/cJSON.h>

void func(cJSON * array){
	if(array==NULL) {printf("{}");return;}
	int size=cJSON_GetArraySize(array);
	printf("{\n");
	printf("    [\n");
	for(int i=0;i<size;i++)
		printf("      %d\n",cJSON_GetArrayItem(array,i)->valueint);
	printf("    ]\n");
	printf("}\n");
	return;
}

	
void main(){
	int numbers[4]={410241396,410241397,410241398,410241399};
	//char *out=NULL;
	//cJSON *root = cJSON_CreateObject();
	cJSON *json_array = cJSON_CreateArray();
	for(int i=0;i<4;i++){
		cJSON_AddItemToArray(json_array,cJSON_CreateNumber(numbers[i]));
	}
	//char* ptr=NULL;
	//cJSON_AddItemToObject(root,NULL,json_array);
	//out=cJSON_Print(json_array);
	func(json_array);
	cJSON_Delete(json_array);
	//free(out);
	return;

}

