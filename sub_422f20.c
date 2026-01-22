// 函数: sub_422f20
// 地址: 0x422f20
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t* ebp_1 = &var_4
int32_t ebx
int32_t var_1c = ebx
int32_t var_18 = 0
int32_t* var_20 = &var_4
int32_t (* var_24)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** esp = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (arg2 != 0)
    sub_40c69c(arg2, &var_18)
    int32_t var_14 = var_18
    char var_10_1 = 0xb
    uint32_t var_c_1 = arg2
    char var_8 = 0
    int32_t edx_1
    edx_1.b = 1
    int32_t eax_3
    eax_3, ebp_1 = sub_40cfa8(0x4184d0, edx_1, data_4ac1bc, 1, &var_14)
    esp = &var_8
    sub_40451c(eax_3)

esp[2]
fsbase->NtTib.ExceptionList = *esp
esp[2] = sub_422f95
sub_404b88(&ebp_1[-5])
return &ebp_1[-5]
