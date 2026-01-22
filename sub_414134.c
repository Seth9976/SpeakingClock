// 函数: sub_414134
// 地址: 0x414134
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t ebx
int32_t var_28 = ebx
int32_t var_24 = 0

if (arg2 != 0)
    *arg2 = 0

int32_t* var_2c = &var_4
int32_t (* var_30)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_1 = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList_1
void var_10
char eax_2
int32_t ebx_2
void* ebp_1
eax_2, ebx_2, ebp_1 = sub_415ce4(*arg1, &var_10)
*(ebp_1 - 5) = eax_2

if (*(ebp_1 - 5) == 0)
    fsbase->NtTib.ExceptionList = ExceptionList_1
    uint32_t (* var_2c_1)(int32_t* arg1 @ ebp) = sub_4141f3
    sub_405368(ebp_1 - 0x20)
    return ebp_1 - 0x20

VariantInit(ebp_1 - 0x1c)
int32_t (* var_3c)(void* arg1, void* arg2) = j_sub_40443c
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t ecx_1 = (*(**(ebp_1 - 0xc) + 0x1c))(8, ExceptionList, var_3c, ebp_1)
OLECHAR** eax_5 = *(ebp_1 - 4)
sub_40548c(ecx_1, *(ebp_1 - 0x14))
sub_405578(0x7fffffff, 1, *(ebp_1 - 0x20), eax_5)
fsbase->NtTib.ExceptionList = arg2
__return_addr = &data_4141d6
return sub_4107b0(ebp_1 - 0x1c)
