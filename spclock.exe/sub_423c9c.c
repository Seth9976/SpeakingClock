// 函数: sub_423c9c
// 地址: 0x423c9c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

sub_404074(arg1, arg2)
int32_t edx
edx.b = arg2.b & 0xfc
sub_423380(arg1, edx)
void* eax_1 = arg1[0xc]

if (eax_1 != 0)
    sub_423648(eax_1, arg1)

if (arg1[0x14] != 0)
    while (true)
        int32_t* esi_1 = arg1[0x14]
        
        if (esi_1[2] s<= 0)
            break
        
        sub_423de4(arg1, sub_41a1dc(esi_1))

int32_t result = sub_40eb14(&arg1[0x14])

if (arg2.b s<= 0)
    return result

return sub_40401c(arg1)
