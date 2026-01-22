// 函数: sub_4545a4
// 地址: 0x4545a4
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

ReleaseCapture()
char result = 0
data_4ab920 = 0

if (arg1 != 0)
    result = sub_403df4(arg1, &data_453234)
    
    if (result != 0)
        return SetCapture(sub_45f888(arg1))
    
    if (arg1[0xc] != 0)
        data_4ab920 = arg1
        return SetCapture(sub_45f888(arg1[0xc]))

return result
