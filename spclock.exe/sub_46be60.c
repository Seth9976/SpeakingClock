// 函数: sub_46be60
// 地址: 0x46be60
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
void* var_8 = nullptr
int32_t var_c = 0
int32_t ebx
int32_t var_10 = ebx
int32_t esi
int32_t var_14 = esi
int32_t* var_18 = &var_4
int32_t (* var_1c)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
sub_451274(arg2, &var_8)
void* eax_2 = var_8
int32_t ecx = sub_404d70()
int32_t eax_4
eax_4.b = sub_408ec8(var_c, eax_2, ecx) == 0
fsbase->NtTib.ExceptionList = ExceptionList
int32_t (__stdcall* var_18_1)(int32_t arg1, int32_t arg2, int32_t arg3) = sub_46bec5
return sub_404bac(&var_c, 2)
