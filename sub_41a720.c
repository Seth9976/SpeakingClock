// 函数: sub_41a720
// 地址: 0x41a720
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t ebx
int32_t var_11c = ebx
int32_t esi
int32_t var_120 = esi
int32_t var_8 = 0
int32_t* var_124 = &var_4
int32_t (* var_128)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
char var_108[0x100]

if (arg2 == 0)
    sub_404c20(&var_8, 0x41a7ec)
else
    sub_404dec(sub_403b48(*arg2, &var_108), &var_108)

int32_t var_118 = var_8
char var_114 = 0xb
sub_403b48(*arg1, &var_108)
char (* var_110)[0x100] = &var_108
char var_10c = 4
char (* edx_2)[0x100]
edx_2.b = 1
int32_t eax_4
void* ebp_1
eax_4, ebp_1 = sub_40cfa8(sub_407f68+0x6c0, edx_2, data_4ac1d4, 1, &var_118)
sub_40451c(eax_4)
fsbase->NtTib.ExceptionList = var_8
__return_addr = sub_41a7dd
sub_404b88(ebp_1 - 4)
return ebp_1 - 4
