// 函数: sub_40e590
// 地址: 0x40e590
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t* ebp_1 = &var_4
int32_t ebx
int32_t var_1c = ebx
int32_t var_18 = 0
uint32_t ebx_1 = arg1
int32_t* var_20 = &var_4
int32_t (* var_24)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
char var_8
int32_t* edx_2

if (ebx_1 == 0)
    edx_2 = sub_40cf6c(sub_407f68+0x9fc, 1, data_4ac468)
else
    uint32_t var_14 = ebx_1
    char var_10_1 = 0
    sub_40c69c(ebx_1, &var_18)
    int32_t var_c_1 = var_18
    var_8 = 0xb
    int32_t edx_1
    edx_1.b = 1
    int32_t* eax_2
    eax_2, ebx_1, ebp_1 = sub_40cfa8(sub_407f68+0x9fc, edx_1, data_4ac32c, 1, &var_14)
    edx_2 = eax_2

edx_2[3] = ebx_1
sub_40451c(edx_2)
fsbase->NtTib.ExceptionList = var_8.d
__return_addr = sub_40e622
sub_404b88(&ebp_1[-5])
return &ebp_1[-5]
