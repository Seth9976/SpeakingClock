// 函数: sub_4741d0
// 地址: 0x4741d0
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

sub_41a290(*(arg1 + 0x50))
sub_41a290(*(arg1 + 0x4c))
sub_4779c0(data_4b1ce0)
void* result = *(arg1 + 0x50)

if (*(result + 8) == 0)
    result = data_4b1ce0
    
    if (*(result + 0x84) != 0)
        return sub_461298(*(data_4b1ce0 + 0x84))

return result
