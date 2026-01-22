// 函数: sub_45c180
// 地址: 0x45c180
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t esi
int32_t var_10 = esi
esi.w = 0xffb3
char eax_1
int32_t edx
eax_1, edx = sub_403e64(arg1, esi)
char var_9 = eax_1
edx.b = 1
sub_460db8(arg1, edx)
int32_t* var_c = &var_4
int32_t (* var_10_1)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
(*(*arg1 + 0xb0))(ExceptionList, var_10_1, var_c)
void* ebp_1 = sub_45c37c(arg1)
fsbase->NtTib.ExceptionList = arg1
__return_addr = sub_45c1e3
return sub_460db8(*(ebp_1 - 4), 0)
