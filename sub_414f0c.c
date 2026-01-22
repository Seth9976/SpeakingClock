// 函数: sub_414f0c
// 地址: 0x414f0c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
char* var_8 = nullptr
char* var_c = nullptr
int32_t ebx
int32_t var_10 = ebx
int32_t* var_14 = &var_4
int32_t (* var_18)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t esi
sub_413adc(&var_8, arg1, esi)
sub_413adc(&var_c, arg2, esi)
fsbase->NtTib.ExceptionList = ExceptionList
int32_t (__stdcall* var_14_1)(int32_t arg1, int32_t arg2) = sub_414f6e
return sub_404bac(&var_c, 2)
