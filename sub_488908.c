// 函数: sub_488908
// 地址: 0x488908
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_1
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = ExceptionList_1
int32_t esi
int32_t var_18 = esi
int32_t edi
int32_t var_1c = edi
char var_5 = arg3.b
int32_t* esi_1 = arg2
arg2.b = 1
int32_t var_10 = sub_403c38(arg3, arg2)
int32_t* var_c = &var_4
int32_t (* var_10_1)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
void* ebp_1

if (var_5 == 0)
    int32_t eax_5
    int32_t edx_1
    edx_1:eax_5 = sx.q(var_c)
    int32_t var_18_1 = edx_1
    int32_t var_1c_1 = eax_5
    ebp_1 = sub_41cb10(var_10_1, arg1, (*(*arg1 + 0xc))())
else
    ebp_1 = sub_488574(arg1, var_10_1)

sub_41c894(*(ebp_1 - 0xc), 0, 0)
*(ebp_1 - 0xc)
(*(*esi_1 + 0x6c))()
int32_t var_8
fsbase->NtTib.ExceptionList = var_8
__return_addr = sub_488999
return sub_403c68(*(ebp_1 - 0xc))
