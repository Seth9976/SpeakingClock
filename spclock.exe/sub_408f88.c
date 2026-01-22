// 函数: sub_408f88
// 地址: 0x408f88
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

uint32_t cchLength = arg1

if (cchLength != 0)
    cchLength = *(cchLength - 4)

void** result = arg2
sub_404c78(result, sub_405018(arg1), cchLength)

if (cchLength s<= 0)
    return result

return CharUpperBuffA(*arg2, cchLength)
