// 函数: sub_40d068
// 地址: 0x40d068
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t i = 0
int32_t esi = sub_403084()

for (; i s<= 6; i += 1)
    if (esi == *((i << 3) + &data_4aa914))
        break

int32_t* result

if (i s> 6)
    int32_t var_10 = esi
    char var_c = 0
    result, esi = sub_40cfa8(sub_407f68+0x1dc, 1, data_4ac084, 0, &var_10)
else
    result = sub_40ceb0(sub_407f68+0x1dc, 1, *((i << 3) + &data_4aa918))

result[3] = esi
return result
