// 函数: sub_4288c7
// 地址: 0x4288c7
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

*arg3 += 1
*arg1 += arg1.b
int16_t entry_ebx
*0x55000000 += entry_ebx:1.b
void* const* var_4 = &__return_addr
int32_t (* var_8)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t temp1 = data_4b1a40
data_4b1a40 += 1

if (temp1 == 0xffffffff)
    sub_405724(&data_4aac30, sub_4010aa+0x16, 2)

fsbase->NtTib.ExceptionList = ExceptionList
return 0
