// 函数: sub_42e88d
// 地址: 0x42e88d
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

sub_403c68(arg1[-1])
sub_404544()
sub_404598(arg2)
int32_t* entry_ebx
sub_403c68(entry_ebx[3])
entry_ebx[3] = arg1[-1]

if (arg1[-1] != 0)
    void* eax_2 = arg1[-1]
    *(eax_2 + 0x14) = entry_ebx
    int32_t edx
    edx.w = 0xfffd
    *(eax_2 + 0x10) = sub_403e7c(entry_ebx, edx)
    void* eax_6 = arg1[-1]
    *(eax_6 + 0x1c) = entry_ebx
    int32_t edx_1
    edx_1.w = 0xfffc
    *(eax_6 + 0x18) = sub_403e7c(entry_ebx, edx_1)

int32_t esi
esi.w = 0xfffd
sub_403e64(entry_ebx, esi, entry_ebx)
TEB* fsbase
fsbase->NtTib.ExceptionList = arg2
sub_404b88(&arg1[-0x12])
*arg1
return &arg1[-0x12]
