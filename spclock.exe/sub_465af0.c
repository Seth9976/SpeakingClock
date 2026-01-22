// 函数: sub_465af0
// 地址: 0x465af0
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebx = 0
int32_t result

do
    int32_t edi_2 = ebx & 0x7f
    result = *(arg1 + (edi_2 << 2) + 8)
    
    if (result != 0)
        (*data_4ac218)(result)
        result = 0
        *(arg1 + (edi_2 << 2) + 8) = 0
    
    ebx += 1
while (ebx.b != 0x18)

return result
