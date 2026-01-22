// 函数: sub_419d24
// 地址: 0x419d24
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t edx
int32_t var_c = edx
(*(*data_4b19b4 + 0x14))()
int24_t var_10 = &var_4
int32_t (* var_14)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_1 = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList_1
var_10:2.b = 0 == (arg1[7].w & 0x201)

if (var_10:2.b != 0)
    sub_419b98()

int32_t* var_1c = &var_4
int32_t (* var_20)(void* arg1, void* arg2) = j_sub_40443c
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_28 = &var_4
void* eax_4
void* edx_2
eax_4, edx_2 = sub_403b40(arg1)
char eax_5
void* ebp_1
eax_5, ebp_1 = sub_419c7c(eax_4, edx_2)
*(ebp_1 - 9) = eax_5

if (*(ebp_1 - 0xa) != 0)
    sub_419bf0()

fsbase->NtTib.ExceptionList = arg1
__return_addr = sub_419dba

if (*(ebp_1 - 0xa) == 0)
    return 0

return sub_419c20()
