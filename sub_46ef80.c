// 函数: sub_46ef80
// 地址: 0x46ef80
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t dwNewLong = arg3
sub_46d308(arg1, arg2)

if (sub_45fc28(arg1) != 0)
    dwNewLong = GetWindowLongA(sub_45f888(arg1), 0xffffffec) & 0xffff8fff
    sub_45b918(arg1, &dwNewLong)
    SetWindowLongA(sub_45f888(arg1), 0xffffffec, dwNewLong)

int32_t result = sub_423974(arg1)

if (result - 1 s>= 0)
    int32_t edi_2 = result
    int32_t esi_1 = 0
    int32_t i
    
    do
        result = sub_403df4(sub_423948(arg1, esi_1), 0x44a174)
        
        if (result.b != 0)
            result = sub_4506cc(sub_423948(arg1, esi_1))
        
        esi_1 += 1
        i = edi_2
        edi_2 -= 1
    while (i != 1)

return result
