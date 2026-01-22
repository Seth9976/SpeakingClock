// 函数: sub_473348
// 地址: 0x473348
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

void* result = sub_45fc28(arg1)

if (result.b != 0)
    WINDOWPLACEMENT lpwndpl
    lpwndpl.length = 0x2c
    GetWindowPlacement(sub_45f888(arg1), &lpwndpl)
    uint32_t showCmd = lpwndpl.showCmd
    result = showCmd - 2
    
    if (showCmd == 2)
        *(arg1 + 0x273) = 1
    else
        void* result_1 = result
        result -= 1
        
        if (result_1 == 1)
            *(arg1 + 0x273) = 2
        else
            *(arg1 + 0x273) = 0

return result
