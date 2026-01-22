// 函数: sub_49c4c8
// 地址: 0x49c4c8
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t* ebx = arg1
char eax_1 = sub_49c25c(ebx)
int32_t** result

if (eax_1 != 0)
    result, ebx = sub_498254(*(ebx[0xc] + 0x30))

if (eax_1 == 0 || result == 0)
    result = ebx[0xbb]
    
    if (result == 0)
        return sub_49b020(ebx)

return result
