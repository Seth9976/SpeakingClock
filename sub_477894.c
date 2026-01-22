// 函数: sub_477894
// 地址: 0x477894
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t result = sub_404fb0(*(arg1 + 0x54), arg2)
bool z

if (z)
    return result

sub_404bdc(arg1 + 0x54, arg2)

if (*(arg1 + 0x122) != 0)
    *(arg1 + 0x124)
    return (*(arg1 + 0x120))()

int32_t edx_2
edx_2.b = 1
int32_t* eax_3 = sub_44962c(&data_449584, edx_2)
sub_4693b4(eax_3, arg2)
int32_t* var_14 = &var_4
int32_t (* var_18)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
char* esi
esi.w = 0xffef
sub_403e64(eax_3, esi)
fsbase->NtTib.ExceptionList = eax_3
__return_addr = &data_477920
return sub_403c68(eax_3)
