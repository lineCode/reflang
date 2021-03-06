// !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
// !!! This file is auto-generated by Reflang. !!!
// !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
#include "cpp11-enum.gen.hpp"

#include <algorithm>
#include <cassert>
#include <stdexcept>
#include <type_traits>

namespace reflang
{


Enum<MyNamespace::MyClass::Cpp11Enum>::ConstIterator::ConstIterator(bool is_last)
:	last_(is_last)
,	value_(EnumType::Value1)
{
}

Enum<MyNamespace::MyClass::Cpp11Enum>::EnumType Enum<MyNamespace::MyClass::Cpp11Enum>::ConstIterator::operator*()
{
	return value_;
}

Enum<MyNamespace::MyClass::Cpp11Enum>::ConstIterator& Enum<MyNamespace::MyClass::Cpp11Enum>::ConstIterator::operator++()
{
	switch (value_)
	{
		case EnumType::Value1:
			value_ = EnumType::Value2;
			break;
		case EnumType::Value2:
			value_ = EnumType::Value3;
			break;
		case EnumType::Value3:
			value_ = EnumType::Value5;
			break;
		case EnumType::Value5:
			value_ = EnumType::Value6;
			break;
		case EnumType::Value6:
			last_ = true;
			break;
	}
	return *this;
}

Enum<MyNamespace::MyClass::Cpp11Enum>::ConstIterator Enum<MyNamespace::MyClass::Cpp11Enum>::ConstIterator::operator++(int)
{
	auto tmp = *this;
	operator++();
	return tmp;
}

Enum<MyNamespace::MyClass::Cpp11Enum>::ConstIterator& Enum<MyNamespace::MyClass::Cpp11Enum>::ConstIterator::operator--()
{
	if (last_)
	{
		last_ = false;
		value_ = EnumType::Value6;
	}
	else
	{
		switch (value_)
		{
			case EnumType::Value1:
				assert(false);
				break;
			case EnumType::Value2:
				value_ = EnumType::Value1;
				break;
			case EnumType::Value3:
				value_ = EnumType::Value2;
				break;
			case EnumType::Value5:
				value_ = EnumType::Value3;
				break;
			case EnumType::Value6:
				value_ = EnumType::Value5;
				break;
		}
	}
	return *this;
}

Enum<MyNamespace::MyClass::Cpp11Enum>::ConstIterator Enum<MyNamespace::MyClass::Cpp11Enum>::ConstIterator::operator--(int)
{
	auto tmp = *this;
	operator--();
	return tmp;
}

bool Enum<MyNamespace::MyClass::Cpp11Enum>::ConstIterator::operator==(const ConstIterator& o) const
{
	return ((last_ && o.last_) ||
		(!last_ && !o.last_ && value_ == o.value_));
}

bool Enum<MyNamespace::MyClass::Cpp11Enum>::ConstIterator::operator!=(const ConstIterator& o) const
{
	return !(*this == o);
}

Enum<MyNamespace::MyClass::Cpp11Enum>::ConstIterator Enum<MyNamespace::MyClass::Cpp11Enum>::IteratorContainer::begin() const
{
	return ConstIterator(false);
}

Enum<MyNamespace::MyClass::Cpp11Enum>::ConstIterator Enum<MyNamespace::MyClass::Cpp11Enum>::IteratorContainer::end() const
{
	return ConstIterator(true);
}

Enum<MyNamespace::MyClass::Cpp11Enum>::IteratorContainer Enum<MyNamespace::MyClass::Cpp11Enum>::Iterate()
{
	return IteratorContainer();
}

bool Enum<MyNamespace::MyClass::Cpp11Enum>::TryTranslate(const std::string& s, EnumType& value)
{
	if (s == "Value1")
	{
		value = EnumType::Value1;
		return true;
	}
	else if (s == "Value2")
	{
		value = EnumType::Value2;
		return true;
	}
	else if (s == "Value3")
	{
		value = EnumType::Value3;
		return true;
	}
	else if (s == "Value4")
	{
		value = EnumType::Value4;
		return true;
	}
	else if (s == "Value5")
	{
		value = EnumType::Value5;
		return true;
	}
	else if (s == "Value6")
	{
		value = EnumType::Value6;
		return true;
	}
	else
	{
		return false;
	}
}

std::string Enum<MyNamespace::MyClass::Cpp11Enum>::Translate(EnumType e)
{
	switch (e)
	{
		case EnumType::Value1:
			return "Value1";
			break;
		case EnumType::Value2:
			return "Value2";
			break;
		case EnumType::Value3:
			return "Value3";
			break;
		case EnumType::Value5:
			return "Value5";
			break;
		case EnumType::Value6:
			return "Value6";
			break;
	}
	return std::string();
}

static const std::string MyNamespace__MyClass__Cpp11Enum_name = "MyNamespace::MyClass::Cpp11Enum";

const std::string& Enum<MyNamespace::MyClass::Cpp11Enum>::GetName() const
{
	return MyNamespace__MyClass__Cpp11Enum_name;
}

std::vector<std::string> Enum<MyNamespace::MyClass::Cpp11Enum>::GetStringValues() const
{
	std::vector<std::string> values;
	values.reserve(5);
	for (const auto& value : this->Iterate())
	{
		values.push_back(this->Translate(value));
	}
	return values;
}

std::vector<int> Enum<MyNamespace::MyClass::Cpp11Enum>::GetIntValues() const
{
	std::vector<int> values;
	values.reserve(5);
	for (const auto& value : this->Iterate())
	{
		values.push_back(static_cast<int>(value));
	}
	return values;
}

bool Enum<MyNamespace::MyClass::Cpp11Enum>::TryTranslate(const std::string& value, int& out)
{
	EnumType tmp;
	bool result = this->TryTranslate(value, tmp);
	if (result)
	{
		out = static_cast<int>(tmp);
	}
	return result;
}

bool Enum<MyNamespace::MyClass::Cpp11Enum>::TryTranslate(int value, std::string& out)
{
	switch (static_cast<EnumType>(value))
	{
	case EnumType::Value1:
	case EnumType::Value2:
	case EnumType::Value3:
	case EnumType::Value5:
	case EnumType::Value6:
		out = Translate(static_cast<EnumType>(value));
		return true;
	default:
		return false;
	}
}

namespace
{
	struct MyNamespace__MyClass__Cpp11Enum_registrar
	{
		MyNamespace__MyClass__Cpp11Enum_registrar()
		{
			::reflang::registry::internal::Register(
				std::make_unique<Enum<MyNamespace::MyClass::Cpp11Enum>>());
		}
	} MyNamespace__MyClass__Cpp11Enum_instance;
}


}  // namespace reflang
