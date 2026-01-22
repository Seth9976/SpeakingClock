// 函数: sub_43313c
// 地址: 0x43313c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

if (data_4b1b7c != 0)
    return data_4b1b7c(arg1, arg2)

if (data_4b1b68 u> 0)
    data_4b1b7c = GetProcAddress(data_4b1b68, "EndBufferedPaint")
    
    if (data_4b1b7c != 0)
        return data_4b1b7c(arg1, arg2)

return 0x80004001
