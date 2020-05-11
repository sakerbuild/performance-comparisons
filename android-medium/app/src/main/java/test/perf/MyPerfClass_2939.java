package test.perf;

public class MyPerfClass_2939{
	private final String property;

	public MyPerfClass_2939(String param) {
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
		MyPerfClass_2939 other = (MyPerfClass_2939) obj;
		if (property == null) {
			if (other.property != null)
				return false;
		} else if (!property.equals(other.property))
			return false;
		return true;
	}
}
