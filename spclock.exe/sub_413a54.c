// 函数: sub_413a54
// 地址: 0x413a54
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp

if (arg2 != 0)
    *arg2 = 0

void var_10
char eax_2
int32_t ebx_1
int32_t* ebp_1
eax_2, ebx_1, ebp_1 = sub_415ce4(*arg1, &var_10)
*(ebp_1 - 5) = eax_2

if (*(ebp_1 - 5) == 0)
    *ebp_1
    return zx.d(*(ebp_1 - 5))

VariantInit(&ebp_1[-7])
int32_t (* var_2c)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
(*(*ebp_1[-3] + 0x1c))(0x100, ExceptionList, var_2c, ebp_1)
sub_404bdc(ebp_1[-1], ebp_1[-5])
fsbase->NtTib.ExceptionList = arg2
__return_addr = &data_413ad0
return sub_4107b0(&ebp_1[-7])
