// 函数: sub_449250
// 地址: 0x449250
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

TEB* fsbase
fsbase->NtTib.ExceptionList = __return_addr
int32_t ebx_1 = arg1[-0xc] - 1

if (ebx_1 s>= 0)
    int32_t i_1 = ebx_1 + 1
    void* esi_1 = &arg1[-0x3b]
    int32_t i
    
    do
        int32_t pv = *esi_1
        
        if (pv != 0)
            CoTaskMemFree(pv)
        
        esi_1 += 8
        i = i_1
        i_1 -= 1
    while (i != 1)

fsbase->NtTib.ExceptionList = arg3
sub_405380(&arg1[-0x43], 2)
sub_404b88(&arg1[-0x41])
sub_405368(&arg1[-0x40])
sub_404b88(&arg1[-0x3f])
sub_405380(&arg1[-0x3e], 2)
sub_4056d8(&arg1[-6], sub_448c20)
sub_404b88(&arg1[-1])
*arg1
return arg1[-0xa]
