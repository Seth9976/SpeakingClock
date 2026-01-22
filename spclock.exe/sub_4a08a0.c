// 函数: sub_4a08a0
// 地址: 0x4a08a0
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

sub_404b88(arg1)
int32_t edx
edx.b = 1
int32_t* eax_1 = sub_428a78(sub_42891c+0xa8, edx)
sub_428b18(eax_1, 0x80000000)
char eax_4
int32_t* esi_1
eax_4, esi_1 = sub_428ca4(eax_1, sub_4a090c+4)

if (eax_4 != 0)
    sub_42911c(eax_1, 0, esi_1)
    sub_428ae8(eax_1)
    
    if (*esi_1 != 0 && sub_40984c(*esi_1) == 0)
        sub_404b88(esi_1)

return sub_403c68(eax_1)
