// 函数: sub_41d87b
// 地址: 0x41d87b
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebx_1 = *(arg1[-1] + 8) - 1

if (ebx_1 s>= 0)
    int32_t i_1 = ebx_1 + 1
    int32_t esi_1 = 0
    int32_t i
    
    do
        int32_t* eax_1 = sub_41a0f4(arg1[-1], esi_1)
        
        if (sub_403df4(eax_1, &data_418674) != 0)
            eax_1[7].w &= 0xff7f
        
        esi_1 += 1
        i = i_1
        i_1 -= 1
    while (i != 1)

TEB* fsbase
fsbase->NtTib.ExceptionList = __return_addr
sub_403c68(arg1[-1])
fsbase->NtTib.ExceptionList = arg3
sub_41a520(data_4b19d0)
fsbase->NtTib.ExceptionList = arg5
int32_t result = (*(*data_4b19b4 + 0x18))()
*arg1
return result
