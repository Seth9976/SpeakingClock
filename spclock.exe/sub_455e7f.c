// 函数: sub_455e7f
// 地址: 0x455e7f
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

TEB* fsbase
fsbase->NtTib.ExceptionList = __return_addr
arg2 = &data_455e9c
sub_42c608(arg1[-4])
char i

do
    arg1[-1] += 1
    int32_t temp1_1 = arg1[-3]
    arg1[-3] -= 1
    
    if (temp1_1 == 1)
        fsbase->NtTib.ExceptionList = arg3
        arg5 = 0x455ec3
        return sub_41a520(data_4b1c98)
    
    arg1[-4] = sub_41a0f4(arg1[-2], arg1[-1])
    i, arg1 = sub_42c5ac(arg1[-4])
while (i == 0)
arg2 = arg1
int32_t (* arg_4)(void* arg1, void* arg2) = j_sub_40443c
__return_addr = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &__return_addr
sub_456048(arg1[-4])
sub_4045c8(__return_addr, arg_4)
int32_t result = sub_4045c8(arg3, arg4)
*arg1
return result
