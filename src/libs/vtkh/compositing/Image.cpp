// See License.txt

#include "Image.hpp"
#include <png_utils/ascent_png_encoder.hpp>

namespace vtkh
{

void Image::Save(const std::string &name,
                 const std::vector<std::string> &comments)
{
    ascent::PNGEncoder encoder;
    encoder.Encode(&m_pixels[0],
        m_bounds.X.Max - m_bounds.X.Min + 1,
        m_bounds.Y.Max - m_bounds.Y.Min + 1,
        comments);   
    encoder.Save(name);
}

void Image::Save(const std::string &name,
                 const std::vector<std::string> &comments) const
{
    ascent::PNGEncoder encoder;
    encoder.Encode(&m_pixels[0],
        m_bounds.X.Max - m_bounds.X.Min + 1,
        m_bounds.Y.Max - m_bounds.Y.Min + 1,
        comments);   
    encoder.Save(name);
}
} // namespace vtkh
