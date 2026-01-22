// 函数: sub_4949bc
// 地址: 0x4949bc
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t* esi = arg1

if (arg2 u>= 1)
    if (arg2 != 1)
        goto label_4949de
    
    if (arg3 != esi[0xc])
        esi[0xc] = arg3
        goto label_4949de
else if (arg3 != esi[0xb])
    esi[0xb] = arg3
label_4949de:
    arg1.b = esi[8].b - 3
    char temp1_1 = arg1.b
    arg1.b -= 2
    
    if (temp1_1 u< 2 && *(esi + 0x21) == 0)
        int32_t* eax = esi
        esi.w = 0xfffc
        sub_403e64(eax, esi)
