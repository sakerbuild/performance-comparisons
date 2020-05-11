package test.perf;

public class MyPerfClass_187{
	private final String property;

	public MyPerfClass_187(String param) {
		this.property = param;
	}

	public String getProperty() {
		return property;
	}

	@Override
	public int hashCode() {
		final int prime = 31;
		int result = 1;
		result = prime * result + ((property == null) ? 0 : property.hashCode());
		return result;
	}

	@Override
	public boolean equals(Object obj) {
		if (this == obj)
			return true;
		if (obj == null)
			return false;
		if (getClass() != obj.getClass())
			return false;
		MyPerfClass_187 other = (MyPerfClass_187) obj;
		if (property == null) {
			if (other.property != null)
				return false;
		} else if (!property.equals(other.property))
			return false;
		return true;
	}
}
