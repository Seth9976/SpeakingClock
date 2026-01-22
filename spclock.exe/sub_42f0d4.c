// 函数: sub_42f0d4
// 地址: 0x42f0d4
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t ebx
int32_t var_18 = ebx
char* var_10 = nullptr
uint32_t var_14 = 0
int32_t* var_1c = &var_4
int32_t (* var_20)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_1 = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList_1
char var_9 = arg1[0xb].b
int32_t* var_28 = &var_4
int32_t (* var_2c)(void* arg1, void* arg2) = j_sub_40443c
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
sub_409b54(arg2, &var_14)
sub_40dc4c(var_14, &var_10)
sub_404fb0(var_10, sub_42f18f+5)
arg1[0xb].b = 0
void* ebp_1 = sub_42dfb4(arg1, arg2)
fsbase->NtTib.ExceptionList = ExceptionList
int32_t (* var_28_1)(int32_t* arg1 @ ebp, int32_t arg2, int32_t arg3) = sub_42f162
void* result = *(ebp_1 - 4)
*(result + 0x2c) = *(ebp_1 - 5)
return result
