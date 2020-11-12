//debug functions to exit with extreme prejudice
void crash_and_burn_recurv(int* frame_num){
	//attempt to write to address 0
	*(char*)((long)frame_num & ~(long)frame_num) = 0;

	//try to write to read-only memory
	char* str = "";
	str[0] = '\x01';

	//execute instruction we're not allowed to
	__asm__("hlt");

	//infinite recursion
	int new_num = ++*frame_num;
	crash_and_burn_recurv(&new_num);
}

void crash_and_burn(void){
	int init_frame_num = 0;
	crash_and_burn_recurv(&init_frame_num);
}
