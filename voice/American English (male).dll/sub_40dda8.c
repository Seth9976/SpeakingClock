// 函数: sub_40dda8
// 地址: 0x40dda8
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

int32_t ebp
int32_t var_4 = ebp
int32_t ebx
int32_t var_28 = ebx
int32_t var_24 = 0

if (arg2 != 0)
    *arg2 = 0

int32_t* var_2c = &var_4
int32_t (* var_30)(void* arg1, void* arg2) = j_sub_40338c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_1 = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList_1
void var_10
char eax_2
int32_t ebx_2
void* ebp_1
eax_2, ebx_2, ebp_1 = sub_40e9b0(*arg1, &var_10)
*(ebp_1 - 5) = eax_2

if (*(ebp_1 - 5) == 0)
    fsbase->NtTib.ExceptionList = ExceptionList_1
    int32_t (* var_2c_1)(int32_t* arg1 @ ebp) = sub_40de67
    sub_403ffc(ebp_1 - 0x20)
    return ebp_1 - 0x20

VariantInit(ebp_1 - 0x1c)
int32_t (* var_3c)(void* arg1, void* arg2) = j_sub_40338c
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t ecx_1 = (*(**(ebp_1 - 0xc) + 0x1c))(8, ExceptionList, var_3c, ebp_1)
OLECHAR** eax_5 = *(ebp_1 - 4)
sub_40410c(ecx_1, *(ebp_1 - 0x14))
sub_4041f8(0x7fffffff, 1, *(ebp_1 - 0x20), eax_5)
fsbase->NtTib.ExceptionList = arg2
__return_addr = &data_40de4a
return sub_40d0f4(ebp_1 - 0x1c)
