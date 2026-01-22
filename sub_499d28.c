// 函数: sub_499d28
// 地址: 0x499d28
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

sub_45dd14(arg1)
char result = (*(*arg1 + 0x154))()

if (result != 0)
    if ((*(*arg1 + 0x13c))() != 0)
        sub_495ff8((*(*arg1 + 0x13c))())
    
    (*(*arg1 + 0x84))()
    result = sub_45d150(arg1, sub_42c73c(arg1[0x94]), 0)

if (*(arg1 + 0x263) != 0 && arg1[0xac].b == 1)
    (*(*arg1 + 0x84))()
    result = sub_45d150(arg1, sub_42c73c(arg1[0x94]), 0)

if (*(arg1 + 0x29b) == 0)
    return result

*(arg1 + 0x29b) = 0
return (*(*arg1 + 0xf8))()
