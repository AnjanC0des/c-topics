#include<stdio.h>
#include<stdlib.h>
#include <cjson/cJSON.h>

void main(){
	int numbers[3]={14345,14346,14347};
	char *out=NULL;
	cJSON *root = cJSON_CreateObject();
	cJSON *json_array = cJSON_CreateArray();
	for(int i=0;i<3;i++){
		cJSON_AddItemToArray(json_array,cJSON_CreateNumber(numbers[i]));
	}
	char* ptr=NULL;
	cJSON_AddItemToObject(root,NULL,json_array);
	out=cJSON_Print(root);
	printf("%s\n",out);
	cJSON_Delete(root);
	free(out);
	return;

}

